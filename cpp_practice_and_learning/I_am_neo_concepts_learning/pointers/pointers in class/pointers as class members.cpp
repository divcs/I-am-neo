#include <iostream>
using namespace std;

class PointerDemo
{
 int *ptr;

public:
 PointerDemo(int value)
 {
  ptr = new int(value);
 }

 void display()
 {
  cout << "Value: " << *ptr << endl;
 }

 ~PointerDemo()
 {
  delete ptr;
 }
};

int main()
{
 PointerDemo obj(10);
 obj.display();
 return 0;
}
