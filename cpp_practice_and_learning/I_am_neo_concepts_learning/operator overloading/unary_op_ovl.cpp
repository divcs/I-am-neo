#include <iostream>
using namespace std;

class Unary
{

 int num;

public:
 Unary(int n) : num(n) {}

 friend int operator-(Unary &obj);

 void display()
 {
  cout << "Value: " << num;
 }
};

int operator-(Unary &obj)
{
 return (-obj.num);
}

int main()
{
 Unary obj1(2);
 obj1 = -obj1;
 obj1.display();

 return 0;
}