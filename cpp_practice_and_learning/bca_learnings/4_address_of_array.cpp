#include <iostream>
using namespace std;

int main()
{
 // the array name is the  address of array or address of first element is the address of array

 int arr[10];
 cout << "Address of first memory block is: " << arr << endl;

 cout << "Address of first memory block is: " << &arr[0] << endl;

 // both gives the same result

 int array[] = {1, 2, 3, 4, 5};
 cout << "Dereferencing array gives: " << *array << endl;                  // first element of array
 cout << "Incrementing dereferencing array gives: " << *array + 1 << endl; // second element of array
 // or
 cout << "Incrementing dereferencing array gives: " << *(array) + 1 << endl; // second element of array //gives same res as above

 cout << "Value at first index: " << *(array + 1) << endl; // array here represents address of zero th index, by adding 1 the address of next element is there


 return 0;
}