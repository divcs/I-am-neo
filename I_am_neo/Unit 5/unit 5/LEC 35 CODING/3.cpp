Problem Statement



In a bustling educational institution, John, a dedicated faculty member, teaches various courses. He keeps track of his teaching hours and hourly rate to calculate his salary accurately. The institution also employs staff like Jane, who manage administrative tasks and receive a fixed monthly salary.



Both John and Jane are examples of the broader category of employees in the institution. The system uses an abstract class, Person, which contains pure virtual functions displayInformation() and calculateSalary(). The Faculty and Staff classes inherit from Person, implementing these functions to display their respective details and calculate their salaries (teaching hours x hourly rate) based on their roles.

Input format :
The first line contains a string representing the name of the faculty member.

The second line contains an integer representing the age of the faculty member.

The third line contains a double value representing the teaching hours of the faculty member.

The fourth line contains a double value representing the hourly rate of the faculty member.

The fifth line contains a string representing the name of the staff member.

The sixth line contains an integer representing the age of the staff member.

The seventh line contains a double value representing the monthly pay of the staff member.

Output format :
The output displays the following:



For the faculty:

Display "Faculty Information:"

Display "Name: [name]" as a string.

Display "Age: [age]" as an integer.

Display "Teaching Hours: [teachingHours]" as a double.

Display "Salary: [calculatedSalary]" as a double, rounded off two decimal points.



For the staff:

Display "Staff Information:"

Display "Name: [name]" as a string.

Display "Age: [age]" as an integer.

Display "Salary: [monthlyPay]" as a double.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ length of name ≤ 100

0 ≤ age ≤ 120

0.0 ≤ teaching hours ≤ 100.0

0.0 ≤ hourly rate ≤ 1000.0

0.0 ≤ monthly pay ≤ 100000.0

Sample test cases :
Input 1 :
John
35
20.5
1500.00
Jane
28
30000.89
Output 1 :
Faculty Information:
Name: John
Age: 35
Teaching Hours: 20.5
Salary: 30750.00

Staff Information:
Name: Jane
Age: 28
Salary: 30000.89
Input 2 :
Alice
40
15.25
1000.54
Bob
29
45000.45
Output 2 :
Faculty Information:
Name: Alice
Age: 40
Teaching Hours: 15.25
Salary: 15258.23

Staff Information:
Name: Bob
Age: 29
Salary: 45000.45

#include <iostream>
#include <iomanip>
using namespace std;

// Abstract base class
class Person {
public:
    virtual void displayInformation() = 0;  // Pure virtual function to display information
    virtual void calculateSalary() = 0;  // Pure virtual function to calculate salary
};

// Faculty class derived from Person
class Faculty : public Person {
private:
    string name;
    int age;
    double teachingHours;
    double hourlyRate;
    double salary;

public:
    // Constructor to initialize Faculty member
    Faculty(string n, int a, double tH, double hR)
        : name(n), age(a), teachingHours(tH), hourlyRate(hR), salary(0) {}

    // Implement calculateSalary for Faculty
    void calculateSalary() override {
        salary = teachingHours * hourlyRate;
    }

    // Implement displayInformation for Faculty
    void displayInformation() override {
        cout << "Faculty Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Teaching Hours: " << teachingHours << endl;
        cout << "Salary: " << fixed << setprecision(2) << salary << endl;
    }
};

// Staff class derived from Person
class Staff : public Person {
private:
    string name;
    int age;
    double monthlyPay;

public:
    // Constructor to initialize Staff member
    Staff(string n, int a, double mP)
        : name(n), age(a), monthlyPay(mP) {}

    // Implement calculateSalary for Staff (monthly pay is already provided)
    void calculateSalary() override {
        // No calculation needed for staff, salary is directly the monthly pay
    }

    // Implement displayInformation for Staff
    void displayInformation() override {
        cout << "Staff Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << fixed << setprecision(2) << monthlyPay << endl;
    }
};

int main() {
    // Input for Faculty
    string facultyName;
    int facultyAge;
    double teachingHours, hourlyRate;
    
    cin >> facultyName >> facultyAge >> teachingHours >> hourlyRate;
    
    // Input for Staff
    string staffName;
    int staffAge;
    double monthlyPay;
    
    cin >> staffName >> staffAge >> monthlyPay;

    // Create Faculty and Staff objects
    Faculty faculty(facultyName, facultyAge, teachingHours, hourlyRate);
    Staff staff(staffName, staffAge, monthlyPay);

    // Calculate salaries for both
    faculty.calculateSalary();
    staff.calculateSalary();

    // Display information for Faculty and Staff
    faculty.displayInformation();
    staff.displayInformation();

    return 0;
}
