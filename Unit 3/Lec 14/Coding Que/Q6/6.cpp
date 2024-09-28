/*
Gokul needs to create a class Numbers that stores three integer values and provides methods to print the values, calculate and print their sum, and find and print the greatest of the three numbers. The class should include a constructor that initializes these three numbers using an initializer list. In the main function, take three integers as input, create an instance of the Numbers class, and call the appropriate methods to display the results.

Input format :
The input consists of three space-separated integers: num1, num2, and num3.

Output format :
The first line of output prints the given numbers separated by a space.

The second line of output prints the sum of the given numbers.

The third line of output prints the greatest of three numbers.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0 ≤ num1, num2, and num3 ≤ 105

Sample test cases :
Input 1 :
10 20 30
Output 1 :
10 20 30
60
30
Input 2 :
45 19 88
Output 2 :
45 19 88
152
88
*/

#include <iostream>
using namespace std;

class Numbers
{
private:
 int num1, num2, num3; // Private members to store three integer values

public:
 // Constructor using an initializer list
 Numbers(int a, int b, int c) : num1(a), num2(b), num3(c) {}

 // Method to print the numbers
 void printNumbers() const
 {
  cout << num1 << " " << num2 << " " << num3 << endl;
 }

 // Method to calculate and print the sum of the three numbers
 void printSum() const
 {
  cout << (num1 + num2 + num3) << endl;
 }

 // Method to find and print the greatest of the three numbers
 void printGreatest() const
 {
  int greatest = num1;
  if (num2 > greatest)
   greatest = num2;
  if (num3 > greatest)
   greatest = num3;
  cout << greatest << endl;
 }
};

int main()
{
 int num1, num2, num3;

 // Input the three integers
 cin >> num1 >> num2 >> num3;

 // Create an instance of the Numbers class
 Numbers numbers(num1, num2, num3);

 // Call methods to display the required outputs
 numbers.printNumbers();  // Print the three numbers
 numbers.printSum();      // Print their sum
 numbers.printGreatest(); // Print the greatest number

 return 0;
}
