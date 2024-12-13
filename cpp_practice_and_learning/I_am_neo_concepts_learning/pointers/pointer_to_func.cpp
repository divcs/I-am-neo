#include <iostream>
using namespace std;
void greet()
{
 cout << "Hello, world!" << endl;
}

int main()
{
 void (*funcPtr)() = greet; // Pointer to function
 funcPtr();                 // Calls the function

 return 0;
}