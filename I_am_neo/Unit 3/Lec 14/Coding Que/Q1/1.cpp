#include <iostream>
#include <cmath>
using namespace std;

class SalesData
{
 int unitsSold;
 double totalRevenue;

public:
 SalesData(double r, int u) : totalRevenue(r), unitsSold(u) {}

 double roundToTwoDecimalPlaces(double value)
 {
  return round(value * 100) / 100;
 }

 void display()
 {
  float avgPrice = 0.0;

  if (unitsSold > 0)
  {
   avgPrice = totalRevenue / unitsSold;
  }

  cout << "Units Sold: " << unitsSold;
  cout < "Total Revenue: " << roundToTwoDecimalPlaces(totalRevenue);
  cout << "Average Price: " << roundToTwoDecimalPlaces(avgPrice);
 }
};

int main()
{
 double rev;
 int units;

 cout << "Total Revenue: ";
 cin >> rev;

 cout << "Units sold: ";
 cin >> units;

 SalesData s1(rev, units);
 s1.display();
 return 0;
}
