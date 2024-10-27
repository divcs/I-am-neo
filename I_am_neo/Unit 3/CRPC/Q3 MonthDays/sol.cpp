#include <iostream>
using namespace std;

class MonthDays
{
 int month;
 int year;

public:
 // Parameterized Constructor
 MonthDays(int m, int y) : month(m), year(y) {}

 // Copy Constructor
 MonthDays(const MonthDays &other) : month(other.month), year(other.year)
 {
  cout << "Copy constructor called" << endl;
 }

 // Destructor
 ~MonthDays()
 {
  cout << "MonthDays object is being destroyed" << endl;
 }

 // Method to get the number of days in the specified month
 int getDaysInMonth() const
 {
  if (month < 1 || month > 12)
  {
   cout << "Invalid month input" << endl;
   return -1; // Indicates an invalid month
  }

  switch (month)
  {
  case 4:
  case 6:
  case 9:
  case 11:
   return 30;
  case 2:
   // Check for leap year
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
   {
    return 29; // Leap year
   }
   else
   {
    return 28; // Non-leap year
   }
  default:
   return 31;
  }
 }
};

int main()
{
 int month, year;
 // cout << "Enter month and year: ";
 cin >> month >> year;

 // Create MonthDays object
 MonthDays original(month, year);

 // Display the number of days in the month
 int days = original.getDaysInMonth();
 if (days != -1)
 {
  cout << "Number of days is " << days << endl;
 }

 // Create a copy of the original object to invoke the copy constructor
 MonthDays copy = original;

 // The destructors will be called automatically when objects go out of scope
 return 0;
}
