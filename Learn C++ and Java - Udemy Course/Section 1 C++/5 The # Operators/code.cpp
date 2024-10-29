#include <iostream>
using namespace std;
#define MKSTR(x) #x

int main()
{

 // The # operator causes a replacement-text token to be converted to a string surrounded by quotes

 cout << MKSTR(HELLO C++) << endl;

 return 0;
}