#include <iostream>
#include <iomanip>
using namespace std;

class DateFormatConverter
{
 int day, month, year;

public:
 DateFormatConverter(int m, int d, int y) : month(m), day(d), year(y) {}

 void displayDate()
 {
  cout << "Date in DD-MM-YYYY format: " << day << "-" << month << "-" << year << endl;
 }
};

int main()
{
 int month, day, year;
 cin >> month >> day >> year;

 if (month >= 1 && month <= 12 && day >= 1 && day <= 31 && year >= 1900 && year <= 2100)
 {
  DateFormatConverter dateConverter(month, day, year);
  dateConverter.displayDate();
 }
 else
 {
  cout << "Invalid date input." << endl;
 }

 return 0;
}
