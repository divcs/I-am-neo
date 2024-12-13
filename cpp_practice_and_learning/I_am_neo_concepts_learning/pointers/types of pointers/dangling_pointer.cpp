#include <iostream>
using namespace std;

int main()
{
 int *ptr = new int(10);
 delete ptr; // Memory deallocated

 // ptr is now a dangling pointer
 cout << "Dangling pointer: " << *ptr << endl; // Undefined behavior

 return 0;
}
