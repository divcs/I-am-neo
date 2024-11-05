#include <iostream>
using namespace std;

void print(int *p)
{
 cout << "Address inside print: " << p << endl;
 cout << "Value inside print: " << *p << endl;
}

int main()
{

 // Address and value for p and *p in all cases whether in function, before calling function or after calling function all are same

 int value = 5;
 int *p = &value;

 cout << "Address of p in main before print: " << p << endl;
 cout << "Value of p in main before print: " << *p << endl;
 print(p);
 cout << "Address of p in main after print: " << p << endl;
 cout << "Value of p in main after print: " << *p << endl;

 return 0;
}