#include <iostream>
using namespace std;

class FrdFDemoClass
{
protected:
 int len;
 int breadth;
 static int countRec;

public:
 FrdFDemoClass(int l, int b)
 {
  len = l;
  breadth = b;
  countRec++;
 }
 friend void display(FrdFDemoClass demo);
 

 inline int area()
 {
  return len * breadth;
 }
};
int FrdFDemoClass::countRec = 0;
void display(FrdFDemoClass demo)
{
 cout << "Length: " << demo.len << endl;
 cout << "Breadth: " << demo.breadth << endl;
 cout << "Area: " << demo.area() << endl;
 cout << "No. of objects created: " << demo.countRec << endl;
}
int main()
{
 FrdFDemoClass demo(10, 20);
 FrdFDemoClass demo2(100, 200);
 FrdFDemoClass demo3(10, 10);
 display(demo);
 display(demo);
 display(demo);
 return 0;
}