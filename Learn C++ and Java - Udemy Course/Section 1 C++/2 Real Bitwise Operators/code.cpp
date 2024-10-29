#include <iostream>
using namespace std;

int main()
{
 unsigned int a = 60;
 unsigned int b = 13;
 int c = 0;

 c = a & b; // 12
 cout << "Line 1 - Value of c is " << c << endl;

 c = a | b; // 61
 cout << "Line 2 - Value of c is " << c << endl;

 c = a ^ b; // 49
 cout << "Line 3 - Value of c is " << c << endl;

 c = ~a; // -61
 cout << "Line 4 - Value of c is " << c << endl;

 c = a << 2; // 240
 cout << "Line 5 - Value of c is " << c << endl;

 c = a >> 2; // 15
 cout << "Line 6 - Value of c is " << c << endl;

 return 0;
}