#include <iostream>
using namespace std;

int main()
{
 int arr[] = {1, 2, 3, 4};
 int *p = &arr[0]; // 8 bytes

 // diff btw array and ptr
 // array size: array length * datatype size
 // ptr 8 bytes
 cout << "Array 1: " << sizeof(arr) << endl;  // 16 bytes
 cout << "Array 2: " << sizeof(*arr) << endl; // 16 bytes
 cout << "Array 3: " << sizeof(&arr) << endl;

 cout << "Ptr 1: " << sizeof(p) << endl;  // 8 bytes
 cout << "Ptr 2: " << sizeof(*p) << endl; // val at address of 0 index 4 bytes
 cout << "Ptr 3: " << sizeof(&p) << endl;

 int a[20] = {10, 20, 30};
 cout << &a[0] << endl;
 cout << &a << endl;
 cout << a << endl;

 int *ptr = &a[0];
 cout << ptr << endl;
 cout << *ptr << endl;
 cout << &ptr << endl;

 //&a[0] and &p gives different values not same

 return 0;
}