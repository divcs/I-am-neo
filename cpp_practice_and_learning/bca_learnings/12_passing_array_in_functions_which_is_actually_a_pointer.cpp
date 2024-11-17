#include <iostream>
using namespace std;

// arr[i]=*(arr+i)

int getSum(int arr[], int n)
{
 // instead of int arr[], we can write int *arr, it'll work the same
 cout << "Size : " << sizeof(arr) << endl; // not an array which gets passed here in arg, int arr[] in actual a pointer to the actual array is passed not the whole array, same as int *arr, that's why it's size is 8 bytes, if it was an array then it's size would be no_of_elements*datatype_size but here it's 8 bytes

 int sum = 0;
 for (int i = 0; i < n; i++)
 {
  sum += arr[i]; // we can also write i[arr], will work the same
 }
 return sum;
}

int main()
{
 int arr[5] = {1, 2, 3, 4, 5};
 cout << "Sum of array elements is : " << getSum(arr, 5) << endl;

 // BENEFIT of array as a pointer being passed to func is that we can send only a part of the array in the func to manipulate, not the whole array
 cout << "Sum of last three elements: " << getSum(arr + 2, 3) << endl;
 return 0;
}