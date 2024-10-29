#include <iostream>
using namespace std;

#define concat(a, b) a##b

int main()
{

 // When concat appears in the program, its arguments are concatenated and used to replace the macro
 int xy = 100;
 string str1 = "Hello World";

 cout << concat(x, y) << endl;
 cout << concat(str, 1) << endl;
 return 0;
}