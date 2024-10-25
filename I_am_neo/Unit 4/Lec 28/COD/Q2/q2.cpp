#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
 string name;
 string address;
 int phone_no;

public:
 void setDetails(const string &n, const string &addr, int phone)
 {
  name = n;
  address = addr;
  phone_no = phone;
 }

 string getName() const
 {
  return name;
 }
};

class Employee : public Person
{
protected:
 int eno;      // Employee number
 string ename; // Employee name

public:
 void setEmployeeDetails(int number, const string &name)
 {
  eno = number;
  ename = name;
 }
};

class Manager : public Employee
{
private:
 string deptname;  // Department name
 int basic_salary; // Basic salary

public:
 void setManagerDetails(const string &dept, int salary)
 {
  deptname = dept;
  basic_salary = salary;
 }

 int getSalary() const
 {
  return basic_salary;
 }

 string getManagerName() const
 {
  return ename;
 }
};

int main()
{
 int cnt;
 cin >> cnt;            // Read the number of managers
 cin.ignore();          // To ignore the newline character after reading cnt
 Manager managers[100]; // Array of Manager objects

 for (int i = 0; i < cnt; ++i)
 {
  int eno, phone_no, basic_salary;
  string ename, address, deptname;

  // Read details for each manager, one at a time
  cin >> eno;             // Employee number
  cin.ignore();           // Ignore the newline character
  getline(cin, ename);    // Employee name
  getline(cin, address);  // Address
  cin >> phone_no;        // Phone number
  cin.ignore();           // Ignore the newline character
  getline(cin, deptname); // Department name
  cin >> basic_salary;    // Basic salary
  cin.ignore();           // Ignore the newline character

  // Set the details for the manager
  managers[i].setDetails(ename, address, phone_no);
  managers[i].setEmployeeDetails(eno, ename);
  managers[i].setManagerDetails(deptname, basic_salary);
 }

 // Find the highest salary and corresponding manager
 int highest_salary = 0;
 string highest_paid_manager;

 for (int i = 0; i < cnt; ++i)
 {
  int current_salary = managers[i].getSalary();
  if (current_salary > highest_salary)
  {
   highest_salary = current_salary;
   highest_paid_manager = managers[i].getManagerName();
  }
 }

 // Print the result
 cout << "Highest Salary is: " << highest_salary << endl;
 cout << "Manager Name is: " << highest_paid_manager << endl;

 return 0;
}
