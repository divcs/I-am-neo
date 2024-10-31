#include <iostream>
#include <string>
using namespace std;

class BinaryPalindromeFinder
{
 int position;

public:
 // Parameterized Constructor with Initializer List
 BinaryPalindromeFinder(int A) : position(A) {}

 // Destructor
 ~BinaryPalindromeFinder()
 {
  cout << "BinaryPalindromeFinder object is being destroyed" << endl;
 }

 // Function to check if a number is a binary palindrome
 bool isBinaryPalindrome(int num)
 {
  string binary = toBinary(num);
  int left = 0, right = binary.size() - 1;

  while (left < right)
  {
   if (binary[left] != binary[right])
   {
    return false;
   }
   left++;
   right--;
  }
  return true;
 }

 // Function to convert a number to binary as a string
 string toBinary(int num)
 {
  string binary = "";
  while (num > 0)
  {
   binary = (num % 2 == 0 ? "0" : "1") + binary;
   num /= 2;
  }
  return binary;
 }

 // Function to find the A-th binary palindrome
 int findAthPalindrome()
 {
  int count = 0;
  int num = 1; // Start checking from 1 upwards

  while (true)
  {
   if (isBinaryPalindrome(num))
   {
    count++;
    if (count == position)
    {
     return num;
    }
   }
   num++;
  }
 }
};

int main()
{
 int A;
 cout << "Enter the position (A): ";
 cin >> A;

 if (A < 1 || A > 100)
 {
  cout << "Please enter a valid value for A (1 ≤ A ≤ 100)." << endl;
  return 1;
 }

 // Create BinaryPalindromeFinder object
 BinaryPalindromeFinder finder(A);

 // Find and display the A-th binary palindrome number in decimal
 int result = finder.findAthPalindrome();
 cout << "The " << A << "-th binary palindrome is: " << result << endl;

 // The destructor will be called automatically when the object goes out of scope
 return 0;
}
