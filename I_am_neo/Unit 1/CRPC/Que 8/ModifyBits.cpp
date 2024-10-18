#include <iostream>

class BitModifier
{
public:
 // Function to modify bits at even indexes to zero
 void modifyBits(int &K)
 {
  // Traverse each bit of the integer
  for (int i = 0; i < 32; i += 2)
  {
   // Set even-indexed bits to 0 using a bit mask
   K &= ~(1 << i);
  }
 }
};

int main()
{
 // Input
 int K;
 std::cin >> K;

 // Create an instance of BitModifier
 BitModifier modifier;

 // Modify the bits of K
 modifier.modifyBits(K);

 // Output the result
 std::cout << K << std::endl;

 return 0;
}

/*
Ron has been provided with a positive integer K. He needs to modify all bits at even indexes (0, 2, 4, ...) of the binary representation of K to zero while keeping the bits at odd indexes unchanged. Write a program that uses a function modifyBits with call by reference to accomplish this task.



The modifyBits function should take an integer reference as input and update it by setting all bits at even indexes to zero.



Company Tags: Samsung

Input format :
The input consists of a single integer K.

Output format :
The output should be a single integer representing K with all bits at even indexes set to zero.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ K ≤ 1000

Sample test cases :
Input 1 :
30
Output 1 :
10
Input 2 :
10
Output 2 :
10
*/