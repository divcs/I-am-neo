#include <iostream>
#include <vector>

class IncreasingNumbers
{
public:
 // Recursive function to count increasing numbers with 'n' digits starting from the digit 'start'
 int countIncreasingNumbers(int n, int start)
 {
  // Base case: if there's only one digit left, all numbers from start to 9 are valid
  if (n == 1)
   return 10 - start;

  int count = 0;
  // Recursively calculate the count for each next starting digit
  for (int i = start; i <= 9; i++)
  {
   count += countIncreasingNumbers(n - 1, i);
  }
  return count;
 }

 // Wrapper function to calculate the total number of increasing numbers with N digits
 int countIncreasingNumbers(int N)
 {
  int totalCount = 0;

  // Start from each digit (1 to 9) and count increasing numbers with N digits
  for (int i = 1; i <= 9; i++)
  {
   totalCount += countIncreasingNumbers(N - 1, i);
  }

  return totalCount;
 }
};

int main()
{
 // Input
 int N;
 std::cin >> N;

 // Create an instance of IncreasingNumbers
 IncreasingNumbers increasingNumbers;

 // Get the total count of increasing numbers with exactly N digits
 int result = increasingNumbers.countIncreasingNumbers(N);

 // Output the result
 std::cout << result << std::endl;

 return 0;
}

/*
Problem Statement



Kumar has tasked you with finding the total number of increasing numbers with N digits. An increasing number is defined as a number where each digit is greater than or equal to the previous digit. For example, 223 and 4455567 are increasing numbers.



Write a program using the IncreasingNumbers class. This class should have a member function countIncreasingNumbers that uses recursion to calculate the number of valid increasing numbers with N digits, starting with a given digit.



Company Tags: Amazon

Input format :
The input contains a single integer N representing the number of digits.

Output format :
The output prints the total count of increasing numbers with exactly N digits.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 50

Sample test cases :
Input 1 :
3
Output 1 :
165
Input 2 :
2
Output 2 :
45
*/