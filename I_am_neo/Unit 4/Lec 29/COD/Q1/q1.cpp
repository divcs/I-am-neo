#include <iostream>
#include <string>
using namespace std;

// Base class partA
class partA
{
public:
 string name;
 string pan;

 virtual void getInput()
 {
  getline(cin, name); // Read name
  getline(cin, pan);  // Read PAN details
 }

 virtual void display() const
 {
  cout << "Account Holder Name: " << name << endl;
  cout << "PAN: " << pan << endl;
 }
};

// Derived class partB, inheriting from partA and adding income details
class partB : public partA
{
public:
 double grossSalary;
 double incomeFromOtherSources;

 void getInput() override
 {
  partA::getInput();                            // Get name and PAN from partA
  cin >> grossSalary >> incomeFromOtherSources; // Read income details
 }

 void display() const override
 {
  partA::display();
  cout << "Gross Salary: " << grossSalary << endl;
  cout << "Income from Other Sources: " << incomeFromOtherSources << endl;
 }
};

// Derived class partC, inheriting from partA and adding deductions
class partC : public partA
{
public:
 double deductions;

 void getInput() override
 {
  partA::getInput(); // Get name and PAN from partA
  cin >> deductions; // Read deductions
 }

 void display() const override
 {
  partA::display();
  cout << "Deductions: " << deductions << endl;
 }
};

// Class taxComp, inheriting from both partB and partC to calculate and display tax details
class taxComp : public partB, public partC
{
public:
 void getInput()
 {
  partB::getInput(); // Get details from partB (including partA)
  cin >> deductions; // Get deductions from partC
 }

 void computeAndDisplayTax() const
 {
  double taxableIncome = (grossSalary + incomeFromOtherSources) - deductions;
  double taxPayable = taxableIncome * 0.3;

  // Display results
  cout << "Income Tax Calculation" << endl;
  partB::display(); // Display from partB (includes partA details)
  cout << "Deductions: " << deductions << endl;
  cout << "Taxable Income (computed): " << taxableIncome << endl;
  cout << "Tax Payable (computed): " << taxPayable << endl;
  cout << endl;
 }
};

int main()
{
 taxComp taxCompObj;
 taxCompObj.getInput();             // Get all necessary inputs
 taxCompObj.computeAndDisplayTax(); // Compute and display tax details

 return 0;
}
