
#include <iostream>
using namespace std;

class Distance
{
 double meters;

public:
 Distance(double m) : meters(m) {}

 // Overloading type casting to double
 operator double() const
 {
  return meters;
 }
};

int main()
{
 Distance dist(100.5);

 // Convert Distance object to double
 double value = dist;
 cout << "Distance in meters: " << value << endl;

 return 0;
}
