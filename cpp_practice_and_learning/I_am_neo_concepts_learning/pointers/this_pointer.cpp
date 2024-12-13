#include <iostream>
using namespace std;
class Test
{
 int x;

public:
 Test(int val) : x(val) {}
 void display()
 {
  cout << "Value of x: " << this->x << endl;
 }
};

int main()
{

 return 0;
}