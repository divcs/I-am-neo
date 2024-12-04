#include <iostream>
using namespace std;

class A
{
public:
 void display()
 {
  cout << "Display from class A" << endl;
 }
};

class B
{
public:
 void display()
 {
  cout << "Display from class B" << endl;
 }
};

class C : public A, public B
{
 // No display() function in class C
};

int main()
{
 C obj;
 obj.A::display(); // Calls display() from class A
 obj.B::display(); // Calls display() from class B
 return 0;
}
