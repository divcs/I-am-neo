// You are using GCC
#include <iostream>
using namespace std;

inline int gcd(int a, int b)
{
 if (b == 0)
  return a;
 return gcd(b, a % b);
}
int main()
{
 int x, y;
 cin >> x >> y;
 int result = gcd(x, y);
 cout << result << endl;
 return 0;
}