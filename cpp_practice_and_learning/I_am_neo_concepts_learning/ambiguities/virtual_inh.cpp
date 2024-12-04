#include <iostream>
using namespace std;

class A
{
public:
 A()
 {
  cout << "A's Constructor" << endl;
 }
 void display()
 {
  cout << "A's display() function" << endl;
 }
};

class B : virtual public A
{
public:
 B()
 {
  cout << "B's Constructor" << endl;
 }
 void displayB()
 {
  cout << "B's display() function" << endl;
 }
};

class C : virtual public A
{
public:
 C()
 {
  cout << "C's Constructor" << endl;
 }
 void displayC()
 {
  cout << "C's display() function" << endl;
 }
};

class D : public B, public C
{
public:
 D()
 {
  cout << "D's Constructor" << endl;
 }
};

int main()
{
 D obj;
 obj.display(); // Resolves ambiguity: only one copy of A is inherited
 return 0;
}
