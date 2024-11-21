Problem Statement



John, an HR manager at a large corporation, has created a system to efficiently manage employee records by categorizing them into two types: Regular and Contract.



To facilitate this, he designed an abstract class named Employee, featuring a pure virtual function called displayInfo() for presenting employee details. Two concrete classes, RegularEmployee and ContractEmployee, inherit from this abstract class.



The system includes a getSalary() function to access each employee's salary. John aims to identify the employee with the highest salary among all entries and display their information accordingly, streamlining the process of employee record management.

Input format :
The first line contains an integer n, representing the number of employees.

The next n lines each contain three space-separated values:

A character indicating the employee type (R for Regular or C for Contract).
An integer representing the employee ID.
A double represents the salary of the employee with 2 decimal points.
Output format :
The output should display the following sentences for the employee with the highest salary:

"Employee Type: [employee type]"

"Employee ID: [employee ID]"

"Salary: [salary]"



Refer to the sample output for formatting specifications.

Code constraints :
2 ≤ n ≤ 10

1 ≤ employeeID ≤ 99999

1.0 ≤ salary ≤10,00,000.0

Sample test cases :
Input 1 :
5
R 201 42000.50
C 202 48000.75
R 203 51000.00
C 204 44000.25
R 205 49000.10
Output 1 :
Employee Type: Regular
Employee ID: 203
Salary: 51000.00
Input 2 :
3
R 101 75000.00
R 102 60000.00
C 103 78000.50
Output 2 :
Employee Type: Contract
Employee ID: 103
Salary: 78000.50

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

// Abstract base class Employee
class Employee {
public:
    virtual void displayInfo() = 0;  // Pure virtual function
    virtual double getSalary() = 0;  // Pure virtual function to get salary
    virtual ~Employee() {}
};

// RegularEmployee class inheriting from Employee
class RegularEmployee : public Employee {
private:
    int id;
    double salary;
    
public:
    RegularEmployee(int id, double salary) : id(id), salary(salary) {}
    
    void displayInfo() override {
        cout << "Employee Type: Regular" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << fixed << setprecision(2) << salary << endl;
    }

    double getSalary() override {
        return salary;
    }
};

// ContractEmployee class inheriting from Employee
class ContractEmployee : public Employee {
private:
    int id;
    double salary;
    
public:
    ContractEmployee(int id, double salary) : id(id), salary(salary) {}
    
    void displayInfo() override {
        cout << "Employee Type: Contract" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << fixed << setprecision(2) << salary << endl;
    }

    double getSalary() override {
        return salary;
    }
};

int main() {
    int n;
    cin >> n;
    
    vector<Employee*> employees;
    
    // Reading employee information and storing in appropriate objects
    for (int i = 0; i < n; ++i) {
        char type;
        int id;
        double salary;
        
        cin >> type >> id >> salary;
        
        if (type == 'R' || type == 'r') {
            employees.push_back(new RegularEmployee(id, salary));
        } else if (type == 'C' || type == 'c') {
            employees.push_back(new ContractEmployee(id, salary));
        }
    }
    
    // Finding the employee with the highest salary
    Employee* highestPaidEmployee = employees[0];
    for (auto& emp : employees) {
        if (emp->getSalary() > highestPaidEmployee->getSalary()) {
            highestPaidEmployee = emp;
        }
    }

    // Displaying information of the employee with the highest salary
    highestPaidEmployee->displayInfo();
    
    // Cleaning up dynamically allocated memory
    for (auto& emp : employees) {
        delete emp;
    }
    
    return 0;
}

