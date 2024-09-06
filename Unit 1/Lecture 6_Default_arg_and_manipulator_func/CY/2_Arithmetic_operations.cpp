// You are using GCC
#include <iostream>
using namespace std;

class Operation
{
 int n1, n2;

public:
 void set(int n1, int n2)
 {
  this->n1 = n1;
  this->n2 = n2;
 }

 inline int add()
 {
  return n1 + n2;
 }
 inline int sub()
 {
  return n1 - n2;
 }
 inline int mul()
 {
  return n1 * n2;
 }
 inline int divs()
 {
  return n1 / n2;
 }
 inline int mod()
 {
  return n1 % n2;
 }
};

int main()
{
 int n1, n2;
 cin >> n1 >> n2;

 Operation op;
 op.set(n1, n2);

 cout << "Addition of two numbers: " << op.add() << endl;
 cout << "Difference of two numbers: " << op.sub() << endl;
 cout << "Product of two numbers: " << op.mul() << endl;
 cout << "Division of two numbers: " << op.divs() << endl;
 cout << "Modulus of two numbers: " << op.mod() << endl;

 return 0;
}