// 1 Passing by Value

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

// Function that takes an object by value
void displayValue(MyClass obj)
{
 std::cout << "Value inside function: " << obj.value << "\n";
}

int main()
{
 MyClass original(42);   // Constructor is called here
 displayValue(original); // Copy constructor is called here to pass the object by value
 std::cout << "Value in main: " << original.value << "\n";
 return 0;
}
