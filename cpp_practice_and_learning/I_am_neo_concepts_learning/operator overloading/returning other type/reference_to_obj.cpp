#include <iostream>
using namespace std;

class RefToObj
{
 int num;

public:
 RefToObj(int n) : num(n) {}
 RefToObj &operator+=(const RefToObj &other)
 {
  this->num += other.num;
  return *this;
 }

 void display()
 {
  cout << "num: " << num << endl;
 }
};

int main()
{
 RefToObj obj1(5);
 RefToObj obj2(10);
 RefToObj obj3(5);
 // chaining
 obj1 += obj2 += obj3;

 obj1.display();
 obj2.display();
 obj3.display();

 return 0;
}