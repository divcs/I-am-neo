#include <iostream>

class MyClass
{
public:
 int value;

 // Constructor
 MyClass(int v) : value(v)
 {
  std::cout << "Constructor called\n";
 }

 // Copy Constructor
 MyClass(const MyClass &obj)
 {
  value = obj.value;
  std::cout << "Copy Constructor called\n";
 }
};