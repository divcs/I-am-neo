#include <iostream>
#include <string>
using namespace std;

// Base class Parent
class Parent
{
public:
 // Default constructor for Parent
 Parent()
 {
  cout << "Parent constructor" << endl;
 }

 // Destructor for Parent
 virtual ~Parent()
 {
  cout << "Parent destructor" << endl;
 }
};

// Derived class Child1
class Child1 : public Parent
{
public:
 // Parameterized constructor for Child1
 Child1(int value)
 {
  cout << "Child1 constructor: " << value << endl;
 }

 // Destructor for Child1
 ~Child1() override
 {
  cout << "Child1 destructor" << endl;
 }
};

// Derived class Child2
class Child2 : public Parent
{
public:
 // Parameterized constructor for Child2
 Child2(float value)
 {
  cout << "Child2 constructor: " << value << endl;
 }

 // Destructor for Child2
 ~Child2() override
 {
  cout << "Child2 destructor" << endl;
 }
};

// Derived class Child3
class Child3 : public Parent
{
public:
 // Parameterized constructor for Child3
 Child3(const string &text)
 {
  cout << "Child3 constructor: " << text << endl;
 }

 // Destructor for Child3
 ~Child3() override
 {
  cout << "Child3 destructor" << endl;
 }
};

int main()
{
 int intValue;
 float floatValue;
 string strValue;

 // Taking inputs
 cin >> intValue;
 cin >> floatValue;
 cin >> strValue;

 // Creating objects of derived classes to observe constructor and destructor order
 Child1 child1(intValue);
 Child2 child2(floatValue);
 Child3 child3(strValue);

 // Objects go out of scope here, so destructors will be called in reverse order

 return 0;
}
