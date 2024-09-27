#include <iostream>
#include <algorithm>

using namespace std;

class ArraySorter
{
public:
 int arr[10];

 // Function to read the array
 void readArray()
 {
  for (int i = 0; i < 10; i++)
  {
   cin >> arr[i];
  }
 }

 // Function to check if all elements are the same
 bool allElementsIdentical()
 {
  for (int i = 1; i < 10; i++)
  {
   if (arr[i] != arr[0])
   {
    return false;
   }
  }
  return true;
 }

 // Function to sort the array in ascending order
 void sortArray()
 {
  sort(arr, arr + 10);
 }

 // Function to print the sorted array
 void printArray()
 {
  cout << "Arranged elements are: ";
  for (int i = 0; i < 10; i++)
  {
   cout << arr[i] << " ";
  }
  cout << endl;
 }
};

int main()
{
 ArraySorter arraySorter;

 // Read the array from the user
 arraySorter.readArray();

 // Check if all elements are identical
 if (arraySorter.allElementsIdentical())
 {
  cout << "All numbers are the same" << endl;
 }
 else
 {
  // Sort the array
  arraySorter.sortArray();

  // Print the sorted array
  arraySorter.printArray();
 }

 return 0;
}