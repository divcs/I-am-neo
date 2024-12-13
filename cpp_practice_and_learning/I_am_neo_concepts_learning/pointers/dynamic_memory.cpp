#include <iostream>
using namespace std;

int main()
{
 int *ptr = new int; // Allocating memory dynamically
 *ptr = 100;

 cout << "Value: " << *ptr << endl;

 delete ptr;    // Freeing allocated memory
 ptr = nullptr; // Avoid dangling pointer
 return 0;
}
