#include <iostream>
using namespace std;

class Demo
{
 int value;

public:
 Demo(int v) : value(v) {}
 void display() { cout << "Value: " << value << endl; }
};

int main()
{
 Demo *ptr = new Demo(10);
 ptr->display();

 delete ptr;
 return 0;
}
