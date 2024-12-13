#include <iostream>
using namespace std;
class Test
{
public:
 void display()
 {
  cout << "Object method called!" << endl;
 }
};
int main()
{

 Test obj;
 Test *ptr = &obj;

 ptr->display(); // Access method using pointer

 return 0;
}