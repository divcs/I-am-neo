// You are using GCC
#include <iostream>
using namespace std;
int main()
{
 int n, n1, n2;
 int t, r, s1, s2, rs1, rs2;
 cout << "Enter a no:";
 cin >> n;
 t = n;
 n1 = n2 = s1 = s2 = rs1 = rs2 = 0;
 while (n)
 {
  r = n % 10;
  if (r % 2 == 0)
  {
   s1 = s1 * 10 + r;
  }
  else
  {
   s2 = s2 * 10 + r;
  }
  n = n / 10;
 }
 rs1 = s1;
 while (rs1)
 {
  r = rs1 % 10;
  n1 = n1 * 10 + r;
  rs1 = rs1 / 10;
 }
 rs2 = s2;
 while (rs2)
 {
  r = rs2 % 10;
  n2 = n2 * 10 + r;
  rs2 = rs2 / 10;
 }
 cout << "No : " << t << endl;
 cout << "N1 = " << n1 << endl;
 cout << "N2 = " << n2;
}