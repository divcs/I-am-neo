#include <iostream>
using namespace std;

int main()
{
 // arr[i]=*(arr+i) or i[arr]=*(i+arr)

 int arr1[] = {1, 2, 3, 4};
 cout << "Value using 2nd index: " << arr1[2] << endl;
 cout << "Value using dereferencing : " << *(arr1 + 2) << endl; // gives same result

 int i = 3;
 cout << i[arr1] << endl;

 return 0;
}