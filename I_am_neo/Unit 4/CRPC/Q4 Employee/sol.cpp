#include <iostream>
#include <iomanip>
using namespace std;

// Base class: Employee
class Employee
{
protected:
 int id;
 double salary;

public:
 // Parameterized Constructor
 Employee(int empId, double empSalary) : id(empId), salary(empSalary) {}

 // Method to calculate bonus
 double calculateBonus()
 {
  return 0.10 * salary;
 }
};

// Class: TeamLead
class TeamLead
{
protected:
 int teamSize;

public:
 // Parameterized Constructor
 TeamLead(int size) : teamSize(size) {}

 // Method to calculate performance score
 double calculatePerformanceScore(double salary)
 {
  return teamSize * (salary / 1000);
 }
};

// Derived class: Manager
class Manager : public Employee, public TeamLead
{
public:
 // Constructor
 Manager(int empId, double empSalary, int teamSize)
     : Employee(empId, empSalary), TeamLead(teamSize) {}

 // Method to display results
 void displayResults()
 {
  double bonus = calculateBonus();
  double performanceScore = calculatePerformanceScore(salary);

  cout << fixed << setprecision(2);
  cout << "Bonus: " << bonus << endl;
  cout << "Team Performance Score: " << performanceScore << endl;
 }
};

int main()
{
 int id, teamSize;
 double salary;

 // Input
 cin >> id >> salary >> teamSize;

 // Create Manager object and display results
 Manager manager(id, salary, teamSize);
 manager.displayResults();

 return 0;
}
