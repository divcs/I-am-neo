#include <iostream>
using namespace std;

class RelOpOv
{
 int num;

public:
 RelOpOv(int n) : num(n) {}

 bool operator==(const RelOpOv &other)
 {
  return num == other.num;
 }
};

int main()
{
 RelOpOv obj1(10), obj2(10);
 if (obj1 == obj2)
 {
  cout << "Both objects are equal." << endl;
 }
 else
 {
  cout << "Both objects are not equal." << endl;
 }
 return 0;
}