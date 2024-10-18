#include <iostream>
using namespace std;

class BitManipulator
{
public:
 static inline unsigned int reverseBits(unsigned int n)
 {                      // Use unsigned int
  unsigned int rev = 0; // Use unsigned int for the result as well
  for (int i = 0; i < 32; i++)
  {
   rev = (rev << 1) | (n & 1); // Reverse the bit
   n = n >> 1;                 // Shift right
  }
  return rev; // Return the reversed unsigned integer
 }
};

int main()
{
 unsigned int n; // Use unsigned int here for input
 cin >> n;
 cout << BitManipulator::reverseBits(n) << endl; // Call the static method and print the result
 return 0;
}
/*

Jack needs to implement a BitManipulator class with a static method named reverseBits that efficiently reverses the bits of a 32-bit integer. The method should be defined as an inline function to optimize performance.

Help Jack write a suitable program for the same.

Example

Input:
1 // value of n

Output:

2147483648

Explanation:

The binary representation of 1 in 32 bits is 00000000000000000000000000000001. When this 32-bit binary is reversed, it becomes 10000000000000000000000000000000, which is the binary equivalent of 2147483648.

Company Tag: HCL

Input format :
The input consists of a single integer n of type long long, representing the 32-bit integer whose bits need to be reversed.

Output format :
The output prints a single integer of type long long, representing the integer formed by reversing the bits of the input integer n.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 107

Sample test cases :
Input 1 :
1
Output 1 :
2147483648
Input 2 :
5
Output 2 :
2684354560
*/
