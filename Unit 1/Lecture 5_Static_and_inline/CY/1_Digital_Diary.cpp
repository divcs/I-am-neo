#include <iostream>
#include <iomanip>
using namespace std;
class DigitalDiary
{
private:
 int hours, minutes, days, months, years;

public:
 void initialize(int h, int m, int d, int mo, int y)
 {
  hours = h;
  minutes = m;
  days = d;
  months = mo;
  years = y;
 }
 bool isValid()
 {
  if (hours < 0 || hours >= 24)
   return false;
  if (minutes < 0 || minutes >= 60)
   return false;
  if (days < 1 || days > 31)
   return false;
  if (months < 1 || months > 12)
   return false;
  if (years < 0 || hours > 9999)
   return false;
  return true;
 }
 void display()
 {
  if (!isValid())
  {
   cout << "Invalid" << endl;
   return;
  }
  cout << "Date:" << days << "-" << months << "-" << years << endl;
  cout << "Time:" << hours << " hrs " << minutes << " mins " << endl;
  int totalMinutes = (hours * 60) + minutes;
  cout << "Total mins: " << totalMinutes << endl;
 }
};
int main()
{
 int h, m, d, mo, y;
 cin >> h >> m >> d >> mo >> y;
 DigitalDiary diary;
 diary.initialize(h, m, d, mo, y);
 diary.display();
}