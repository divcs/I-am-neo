#include <iostream>
using namespace std;

class UnionClassDemo
{
public:
 union UnionDemo
 {
  int intV;
  float floatV;
  char charV;
 } u;

 UnionClassDemo(int i, float f, char c)
 {
  u.intV = i;
  u.floatV = f;
  u.charV = c;
 }

 void display() const
 {
  // Only the last member assigned will give valid output
  cout << "charV = " << u.charV << endl; // Correct way to display based on assignment
 }
};

int main()
{
 UnionClassDemo obj(10, 3.14, 'A');
 obj.display(); // It will display the charV value 'A'

 return 0;
}
