#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double circleA(double r)
{
 return 3.14159 * r * r;
}

double squareA(double sq)
{
 return sq * sq;
}

double triA(double b, double h)
{
 return 0.5 * b * h;
}

int main()
{
 string cname, sqname, tname;
 double radius, sqside, tbase, theight;

 getline(cin, cname);
 cin >> radius;
 cin.ignore();
 getline(cin, sqname);
 cin >> sqside;
 cin.ignore();
 getline(cin, tname);
 cin >> tbase >> theight;

 if (cname.length() <= 100 && sqname.length() <= 100 && tname.length() <= 100)
 {
  if (radius >= 0 && sqside >= 0 && tbase >= 0 && theight >= 0)
  {
   double totalA = circleA(radius) + squareA(sqside) + triA(tbase, theight);
   cout << "Total area of all shapes: " << fixed << setprecision(2) << totalA << endl;
  }
  else
  {
   return 1;
  }
 }
 else
 {
  return 1;
 }

 return 0;
}
