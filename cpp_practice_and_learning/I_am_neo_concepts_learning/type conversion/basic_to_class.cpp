#include <iostream>
using namespace std;

class Distance
{
 int meters;

public:
 // Constructor to convert basic type to class type
 Distance(int m) : meters(m)
 {
  cout << "Basic type to class type conversion." << endl;
 }

 void display()
 {
  cout << "Distance: " << meters << " meters" << endl;
 }
};

int main()
{
 int basicValue = 10;

 // Implicit conversion
 Distance d1 = basicValue;

 // Explicit conversion
 Distance d2(basicValue);

 d1.display();
 d2.display();

 return 0;
}
