#include <iostream>
#include <cmath>
using namespace std;

inline bool isArmstrong(int n)
{
 int sum = 0, original = n;
 int numDigits = 0;

 while (n > 0)
 {
  n /= 10;
  numDigits++;
 }

 n = original;

 while (n > 0)
 {
  int digit = n % 10;
  sum += pow(digit, numDigits);
  n /= 10;
 }

 return sum == original;
}

inline void printFactors(int n)
{
 for (int i = 1; i <= n; i++)
 {
  if (n % i == 0)
  {
   cout << i << " ";
  }
 }
 cout << endl;
}

int main()
{
 int n;
 cin >> n;

 if (isArmstrong(n))
 {
  cout << n << " is an Armstrong number" << endl;
  printFactors(n);
 }
 else
 {
  cout << n << " is not an Armstrong number" << endl;
 }

 return 0;
}