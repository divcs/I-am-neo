#include <iostream>
#include <cstring> // For std::memcpy

class DynamicArray
{
private:
 int *arr;    // Pointer to the dynamically allocated array
 size_t size; // Size of the array

public:
 // Parameterized constructor
 DynamicArray(size_t size) : size(size)
 {
  arr = new int[size]; // Allocate memory for the array
  std::cout << "Array of size " << size << " created." << std::endl;
 }

 // Destructor
 ~DynamicArray()
 {
  delete[] arr; // Release the allocated memory
  std::cout << "Array of size " << size << " deleted." << std::endl;
 }

 // Copy constructor for deep copying
 DynamicArray(const DynamicArray &other) : size(other.size)
 {
  arr = new int[size];                             // Allocate new memory for the copy
  std::memcpy(arr, other.arr, size * sizeof(int)); // Copy the elements
  std::cout << "Array copied." << std::endl;
 }

 // Member function to set values in the array
 void setValue(size_t index, int value)
 {
  if (index < size)
  {
   arr[index] = value;
  }
  else
  {
   std::cerr << "Index out of bounds." << std::endl;
  }
 }

 // Member function to get values from the array
 int getValue(size_t index) const
 {
  if (index < size)
  {
   return arr[index];
  }
  else
  {
   std::cerr << "Index out of bounds." << std::endl;
   return -1; // Return an error value
  }
 }

 // Getter for size
 size_t getSize() const
 {
  return size;
 }
};

int main()
{
 // Create a dynamic array of size 5
 DynamicArray arr(5);

 // Set values in the array
 for (size_t i = 0; i < arr.getSize(); ++i)
 {
  arr.setValue(i, (int)i * 10);
 }

 // Display values in the array
 for (size_t i = 0; i < arr.getSize(); ++i)
 {
  std::cout << "arr[" << i << "] = " << arr.getValue(i) << std::endl;
 }

 // Demonstrate copy constructor
 DynamicArray arrCopy = arr; // Calls the copy constructor

 // Display values in the copied array
 for (size_t i = 0; i < arrCopy.getSize(); ++i)
 {
  std::cout << "arrCopy[" << i << "] = " << arrCopy.getValue(i) << std::endl;
 }

 // The destructor will automatically be called for arr and arrCopy
 return 0;
}