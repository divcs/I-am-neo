#include <iostream>
using namespace std;

class A
{
public:
 int x;
 A() : x(10) {}
};

class B : virtual public A
{
public:
 void displayB()
 {
  cout << "B: x = " << x << endl;
 }
};

class C : virtual public A
{
public:
 void displayC()
 {
  cout << "C: x = " << x << endl;
 }
};

class D : public B, public C
{
 // Class D has access to 'x' through both B and C
};

int main()
{
 D obj;
 obj.displayB();
 obj.displayC();
 return 0;
}
