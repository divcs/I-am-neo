#include <iostream>
using namespace std;

int globalVar = 10; // Global variable

void demo()
{
 static int staticVar = 5; // Static variable
 staticVar++;
 cout << "Static Var: " << staticVar << endl;
 cout << "Global Var: " << globalVar << endl;
}

int main()
{
 demo();
 demo();
 return 0;
}
