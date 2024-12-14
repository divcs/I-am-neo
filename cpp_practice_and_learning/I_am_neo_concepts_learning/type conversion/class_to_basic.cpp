#include <iostream>
using namespace std;

class Distance
{
 int meters;

public:
 Distance(int m) : meters(m) {}

 // Conversion operator: class type to basic type
 operator int() const
 {
  cout << "Class type to basic type conversion." << endl;
  return meters;
 }

 void display()
 {
  cout << "Distance: " << meters << " meters" << endl;
 }
};

int main()
{
 Distance d(15);

 // Class to basic type conversion
 int basicValue = d;

 cout << "Basic value: " << basicValue << endl;

 return 0;
}
