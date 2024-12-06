#include <iostream>
using namespace std;

class Demo
{
 int value;

public:
 // Default Constructor
 Demo()
 {
  value = 0;
  cout << "Default Constructor called." << endl;
 }

 // Parameterized Constructor
 Demo(int v)
 {
  value = v;
  cout << "Parameterized Constructor called with value: " << value << endl;
 }

 // Copy Constructor
 Demo(const Demo &obj)
 {
  value = obj.value;
  cout << "Copy Constructor called. Copied value: " << value << endl;
 }

 // Display method
 void display()
 {
  cout << "Value: " << value << endl;
 }
};

int main()
{
 Demo obj1;        // Default Constructor
 Demo obj2(100);   // Parameterized Constructor
 Demo obj3 = obj2; // Copy Constructor

 obj1.display();
 obj2.display();
 obj3.display();

 return 0;
}
