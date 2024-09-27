#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Expense
{
public:
 string category;
 double amount;
 string date;

 Expense(string category, double amount, string date)
 {
  this->category = category;
  this->amount = amount;
  this->date = date;
 }
};

int main()
{
 int n;
 cin >> n;

 vector<Expense *> expenses;

 // Read expense details
 for (int i = 0; i < n; i++)
 {
  string category, date;
  double amount;
  cin >> category >> amount >> date;
  expenses.push_back(new Expense(category, amount, date));
 }

 // Read category to calculate
 string targetCategory;
 cin >> targetCategory;

 // Calculate total expenses
 double totalExpenses = 0.0;
 double categoryExpenses = 0.0;

 for (Expense *expense : expenses)
 {
  totalExpenses += expense->amount;

  if (expense->category == targetCategory)
  {
   categoryExpenses += expense->amount;
  }
 }

 // Output the results
 cout << fixed << setprecision(2);
 cout << "Total Expenses: " << totalExpenses << endl;
 cout << targetCategory << ": " << categoryExpenses << endl;

 // Free memory
 for (Expense *expense : expenses)
 {
  delete expense;
 }

 return 0;
}