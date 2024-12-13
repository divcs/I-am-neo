#include <iostream>
using namespace std;

int main()
{
 int arr[] = {10, 20, 30};
 int *ptr = arr;

 cout << "Address of first element: " << ptr << endl;
 cout << "Value of second element: " << *(ptr + 1) << endl;

 return 0;
}