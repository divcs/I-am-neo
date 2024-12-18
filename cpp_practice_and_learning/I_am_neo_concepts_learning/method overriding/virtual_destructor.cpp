#include <iostream>
using namespace std;

class Base
{
public:
 // Virtual destructor
 virtual ~Base()
 {
  cout << "Base destructor called" << endl;
 }
};

class Derived : public Base
{
public:
 ~Derived()
 {
  cout << "Derived destructor called" << endl;
 }
};

int main()
{
 Base *basePtr = new Derived();
 delete basePtr; // Calls both Derived and Base destructors correctly
 return 0;
}
