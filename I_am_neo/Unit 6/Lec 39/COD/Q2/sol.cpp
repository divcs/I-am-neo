#include <iostream>
using namespace std;

template <class T>
class A
{
public:
 T a;
 T b;
 A(T a1, T b1)
 {
  a = a1;
  b = b1;
 }
 T maxValue(T a1, T b1)
 {
  T maxV = a1 > b1 ? a1 : b1;
  return maxV;
 }
};

int main()
{

 int a, b;
 cin >> a >> b;
 A<int> obj1(a, b);
 cout << "Maximum value: " << obj1.maxValue(a, b) << endl;
 // cout << "Maximum value: " << maxValue(a, b) << endl;

 double c, d;
 cin >> c >> d;
 A<double> obj2(c, d);
 cout << "Maximum value: " << obj2.maxValue(c, d) << endl;
 // cout << "Maximum value: " << maxValue(c, d) << endl;

 return 0;
}
