#include <iostream>
using namespace std;

void function()
{
 static int var = 0;

 var++;
 cout << "Value of var: " << var << endl;
}

int main()
{
 function();
 function();
 function(); // value retains in the function calls
 return 0;
}