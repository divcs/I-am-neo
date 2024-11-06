#include <iostream>
using namespace std;

void update(int *p)
{
 // update in value of pointer happens and remains in the local function

 cout << "Address of p inside update function before inc: " << p << endl; // address of p
 cout << "Value of p inside update function before inc: " << *p << endl;  // value of p 5
 cout << "-----------------------" << endl;
 p = p + 1;
 cout << "Address of p inside update function after inc: " << p << endl; // address increases by 4 bytes
 cout << "Value of p inside update function after inc: " << *p << endl;  // now points to some value
 cout << "-----------------------" << endl;
}

int main()
{
 int value = 5;
 int *p = &value;

 cout << "Address of p before calling function in main: " << p << endl; // address of p
 cout << "Value of p before calling function in main: " << *p << endl;  // value of p 5
 cout << "-----------------------" << endl;
 update(p);
 cout << "Address of p after calling function in main: " << p << endl; // address of p
 cout << "Value of p after calling function in main: " << *p << endl;  // value of p 5
 return 0;
}