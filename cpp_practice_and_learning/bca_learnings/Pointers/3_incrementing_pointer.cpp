#include <iostream>
using namespace std;

int main()
{
 // Your code goes here

 int i = 3;
 int *t = &i;
 cout << (*t)++ << endl; // or *t =*t+1;
 cout << (*t) << endl;

 cout << "Before t inc: " << t << endl;
 t = t + 1; // will give 1004 if i's add is 1000 as int is of 4 bytes so by incrementing t, it increases by the size of int
 cout << "After t inc: " << t << endl;

 return 0;
}