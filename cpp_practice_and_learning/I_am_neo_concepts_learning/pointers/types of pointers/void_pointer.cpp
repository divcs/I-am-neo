#include <iostream>
using namespace std;

int main()
{
 int a = 10;
 float b = 3.14;
 void *ptr; // Void pointer

 ptr = &a; // Holds address of int
 cout << "Integer value: " << *(static_cast<int *>(ptr)) << endl;

 ptr = &b; // Holds address of float
 cout << "Float value: " << *(static_cast<float *>(ptr)) << endl;

 return 0;
}
