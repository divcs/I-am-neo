#include <iostream>
using namespace std;

int main()
{
 // Your code goes here

 int a = 10;
 int b = 20;
 int c;

 c = a + b;
 c <<= 2; // left shift by 2 means multiply by 2^2
 cout << c << endl;

 c >>= 2; // right shift by 2 means divide by 2^2
 cout << c;

 c &= 2;
 cout << c;

 c ^= 2;
 cout << c;

 c |= 2;
 cout << c;
 return 0;
}