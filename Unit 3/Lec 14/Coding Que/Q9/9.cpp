/*
Harish is learning about destructors. He is unable to solve a question, so help him to solve it. The question is: Create an IntArray class that does the following:

While creating the IntArray object, the user should accept the number of elements that need to be stored, initialize the length variable with that value, and create an integer array of the primitive data type of that length.
It should have a setValue method that takes in the index and the value to be set in that index.
It should have a getValue method that takes in the index and returns the value in that index.
It should have a getLength method that returns the size of the array.
Once the array goes out of scope, it should print "Deleted the array" and delete the array member data.


Note: This kind of question helps in clearing TCS tests.

Input format :
The user consists of the following inputs:

An integer value (count) representing the number of elements to be stored in the IntArray.
For each element, the user is prompted to enter an integer value.
Output format :
The output displays the following:

The value of the element at index (count - 1) in the IntArray.
A message indicating the deletion of the array when it goes out of scope.
Each output will be displayed on a new line.

Code constraints :
The number of elements, count, should be a non-negative integer.

The user should provide at least two elements. If the count is less than 2, the code will display an "Invalid entry" message.

The elements of the IntArray can be any integer value.

Sample test cases :
Input 1 :
5
1
2
3
4
5
Output 1 :
The value of element 4 is: 5
Deleted the array
Input 2 :
1
Output 2 :
Invalid entry
*/

#include <iostream>
using namespace std;

class IntArray
{
private:
 int *arr;   // Pointer to the dynamic array
 int length; // Variable to store the length of the array

public:
 // Constructor to initialize the array with the given length
 IntArray(int size)
 {
  if (size < 2)
  {
   cout << "Invalid entry" << endl;
   arr = nullptr; // Set arr to null to avoid accessing invalid memory
   length = 0;
  }
  else
  {
   length = size;
   arr = new int[length]; // Dynamically allocate memory for the array
  }
 }

 // Destructor to delete the array and print the deletion message
 ~IntArray()
 {
  if (arr != nullptr)
  {
   delete[] arr; // Delete the dynamically allocated array
   cout << "Deleted the array" << endl;
  }
 }

 // Method to set the value at a specific index
 void setValue(int index, int value)
 {
  if (index >= 0 && index < length)
  {
   arr[index] = value;
  }
  else
  {
   cout << "Index out of bounds" << endl;
  }
 }

 // Method to get the value at a specific index
 int getValue(int index) const
 {
  if (index >= 0 && index < length)
  {
   return arr[index];
  }
  else
  {
   cout << "Index out of bounds" << endl;
   return -1; // Return a dummy value in case of invalid index
  }
 }

 // Method to get the length of the array
 int getLength() const
 {
  return length;
 }
};

int main()
{
 int count;

 // Input the number of elements
 cin >> count;

 // Create the IntArray object
 IntArray intArray(count);

 // If the array is valid, proceed to set values
 if (count >= 2)
 {
  // Input the values into the array
  for (int i = 0; i < count; i++)
  {
   int value;
   cin >> value;
   intArray.setValue(i, value);
  }

  // Output the value of the element at index (count - 1)
  cout << "The value of element " << count - 1 << " is: " << intArray.getValue(count - 1) << endl;
 }

 // The destructor will be called automatically when intArray goes out of scope
 return 0;
}
