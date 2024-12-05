#include <iostream>
using namespace std;

int main()
{
 int size;
 cout << "Enter size of array: ";
 cin >> size;

 int *arr = new int[size]; // Dynamically allocate memory

 // Initialize and print array
 for (int i = 0; i < size; i++)
 {
  arr[i] = i + 1;
  cout << arr[i] << " ";
 }

 delete[] arr; // Free the allocated memory
 return 0;
}
