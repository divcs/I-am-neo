#include <iostream>
#include <string>
using namespace std;

class Outer
{
public:
 string outerName;

 // Constructor for Outer class
 Outer(string name) : outerName(name) {}

 // Nested class definition
 class Inner
 {
 private:
  string innerName;

 public:
  // Constructor for Inner class
  Inner(string name) : innerName(name) {}

  // Method to display Inner class details
  void display()
  {
   cout << "Inner class name: " << innerName << endl;
  }
 };

 // Method in the Outer class to display Outer class details
 void display()
 {
  cout << "Outer class name: " << outerName << endl;
 }
};

int main()
{
 // Creating an object of the Outer class
 Outer outer("OuterInstance");

 // Creating an object of the Inner class
 // Note: Inner class is accessed via Outer class
 Outer::Inner inner("InnerInstance");

 // Using Outer class's display function
 outer.display();

 // Using Inner class's display function
 inner.display();

 return 0;
}
