#include <iostream>
using namespace std;
int maxXor(int A, int B)
{
 int max_xor = 0;

 // Check all pairs (i, j) where i and j are in the range [A, B]
 for (int i = A; i <= B; ++i)
 {
  for (int j = i + 1; j <= B; ++j)
  {                                   // j starts from i+1 to avoid duplicate pairs and self-XOR
   int xor_value = i ^ j;             // Calculate XOR
   max_xor = max(max_xor, xor_value); // Update max_xor if current is greater
  }
 }

 return max_xor;
}

int main()
{
 int A, B;

 // Read input
 cin >> A >> B;

 // Get the maximum XOR value and print it
 int result = maxXor(A, B);
 cout << result << endl;

 return 0;
}

/*
Problem Statement

﻿

George needs to optimize a network security system that involves finding the maximum XOR value between any two numbers in a given range. He creates a function, maxXor, to efficiently compute this value for any two integers l and r.



Help him create the function which will be crucial for analyzing potential security vulnerabilities.



Company Tags: Zoho

Input format :
The first line of input contains an integer A.

The second line of input contains an integer B.

Output format :
The output displays the maximal value of the XOR operations for all pairs of integers from A to B.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ A < B ≤ 1000

Sample test cases :
Input 1 :
10
15
Output 1 :
7
Input 2 :
9
20
Output 2 :
31
*/