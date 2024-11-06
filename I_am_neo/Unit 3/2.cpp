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

 Distance addingDistance(Distance &obj)
 {
  Distance sum;

  // calculating total feet and inches
  sum.feet = this->feet + obj.feet;
  sum.inches = this->inches + obj.inches;

  // calculating resultant feet and inches of sum
  if (sum.inches >= 12)
  {
   sum.inches = sum.inches % 12;
   sum.feet = sum.inches / 12;
  }
  return sum;
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
 d3 = d1.addingDistance(d2);
 d3.displayDistance();
 return 0;
}
