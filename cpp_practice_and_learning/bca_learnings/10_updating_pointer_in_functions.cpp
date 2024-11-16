#include <iostream>
using namespace std;

void update(int *p)
{

 *p = *p + 1; // value gets updated
 cout << "Value of the var pointed by the pointer: " << *p << endl;
}

int main()
{
 int value = 5;
 int *p = &value;

 // value 5
 cout << "Value of the var pointed by the pointer before calling function in main: " << *p << endl;

 update(p);

 // value updated
 cout << "Value of the var pointed by the pointer after calling function in main: " << *p << endl;
 return 0;
}