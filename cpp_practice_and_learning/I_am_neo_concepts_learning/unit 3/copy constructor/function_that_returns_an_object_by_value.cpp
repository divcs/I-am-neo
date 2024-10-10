MyClass createObject()
{
 MyClass temp(10); // Constructor is called here
 return temp;      // Copy constructor is called here to return the value
}

int main()
{
 MyClass obj = createObject(); // Copy constructor may be called here (depends on optimization)
 std::cout << "Final Value: " << obj.value << "\n";
 return 0;
}

// 3. Object Initialized with Another Object

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

int main()
{
 MyClass obj1(100);   // Constructor is called to initialize obj1
 MyClass obj2 = obj1; // Copy constructor is called to initialize obj2 with obj1
 MyClass obj3(obj1);  // Copy constructor is called to initialize obj3 with obj1

 std::cout << "obj1 value: " << obj1.value << "\n";
 std::cout << "obj2 value: " << obj2.value << "\n";
 std::cout << "obj3 value: " << obj3.value << "\n";

 return 0;
}
