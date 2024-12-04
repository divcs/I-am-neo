#include <iostream>
using namespace std;

class A
{
public:
 A()
 {
  cout << "Constructor of A called" << endl;
 }
};

class B
{
public:
 B()
 {
  cout << "Constructor of B called" << endl;
 }
};

class C : public A, public B
{
public:
 C()
 {
  cout << "Constructor of C called" << endl;
 }
};

int main()
{
 C obj; // Ambiguous: A's constructor or B's constructor
 return 0;
}

// solution

#include <iostream>
using namespace std;

class A
{
public:
 A()
 {
  cout << "Constructor of A called" << endl;
 }
};

class B
{
public:
 B()
 {
  cout << "Constructor of B called" << endl;
 }
};

class C : public A, public B
{
public:
 C() : A(), B()
 { // Explicitly calling both base class constructors
  cout << "Constructor of C called" << endl;
 }
};

int main()
{
 C obj; // No ambiguity now
 return 0;
}
