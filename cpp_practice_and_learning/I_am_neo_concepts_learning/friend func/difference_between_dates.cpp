#include <iostream>
#include <cmath>
using namespace std;

class Date
{
private:
 int day, month, year;

public:
 Date(int d, int m, int y) : day(d), month(m), year(y) {}

 // Friend function to calculate the difference in years
 friend int yearsDifference(const Date &d1, const Date &d2);

 // Overloaded << operator for printing
 friend ostream &operator<<(ostream &out, const Date &d);

 // Display the date
 void display() const
 {
  cout << day << "/" << month << "/" << year << endl;
 }
};

// Friend function to calculate the difference in years
int yearsDifference(const Date &d1, const Date &d2)
{
 return abs(d1.year - d2.year);
}

// Friend function to overload <<
ostream &operator<<(ostream &out, const Date &d)
{
 out << d.day << "/" << d.month << "/" << d.year;
 return out;
}

int main()
{
 Date date1(15, 5, 2010);
 Date date2(20, 8, 2020);

 cout << "Date 1: " << date1 << endl;
 cout << "Date 2: " << date2 << endl;

 int diff = yearsDifference(date1, date2);
 cout << "Difference in years: " << diff << " years" << endl;

 return 0;
}
