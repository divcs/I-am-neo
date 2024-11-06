#include <iostream>

using namespace std;
class Distance
{
 int feet;
 int inches;

public:
 // default constructor
 Distance() : feet(0), inches(0) {}

 // copy constructor
 Distance(Distance &obj)
 {
  feet = obj.feet;
  inches = obj.inches;
 }

 void setDistance(int f, int i)
 {
  feet = f;
  inches = i;
 }

 Distance add(const Distance &other)
 {
  int totalFeet = feet + other.feet;
  int totalInches = inches + other.inches;

  // Convert inches to feet if totalInches >= 12
  if (totalInches >= 12)
  {
   totalFeet += totalInches / 12;
   totalInches %= 12;
  }
  Distance d3;
  d3.feet = totalFeet;
  d3.inches = totalInches;
  return d3;
 }

 void displayDistance()
 {
  cout << feet << "'" << inches << "\"" << endl;
 }
};
int main()
{
 int f1, i1, f2, i2;
 // cout<<"Feet:";
 cin >> f1 >> i1 >> f2 >> i2;
 // cout<<"Inches:";
 // cin>>i;

 Distance d1;
 d1.setDistance(f1, i1);

 Distance d2;
 d2.setDistance(f2, i2);

 Distance d3;
 d3 = d1.add(d2);
 d3.displayDistance();
 return 0;
}
