/*
You need to implement a program that uses a class Inte﻿ger to manage integer values. The class should utilize an initializer list to set the integer value, and in the main function, an array of Integer objects is created based on user input. For every even index, assign a value of 10, and display all values in the array.

Input format :
The input consists of an integer, N.

Output format :
The output prints the values of the Integer objects separated by a new line.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 100

Sample test cases :
Input 1 :
10
Output 1 :
0
10
0
10
0
10
0
10
0
10
Input 2 :
3
Output 2 :
0
10
0
*/

#include <iostream>
#include <vector>
using namespace std;

class Integer
{
private:
 int value; // private member to store the integer value
public:
 // Constructor using an initializer list
 Integer(int v = 0) : value(v) {}

 // Method to retrieve the value
 int getValue() const
 {
  return value;
 }

 // Method to set the value
 void setValue(int v)
 {
  value = v;
 }
};

int main()
{
 int N;
 cin >> N;

 // Create a vector of Integer objects with N elements
 vector<Integer> arr(N);

 // For every even index, set the value to 10
 for (int i = 0; i < N; ++i)
 {
  if (i % 2 == 1)
  {
   arr[i].setValue(10); // Set value to 10 at odd indices (1-based even indices)
  }
 }

 // Display the values of the Integer objects in the array
 for (int i = 0; i < N; ++i)
 {
  cout << arr[i].getValue() << " ";
 }

 return 0;
}
