#include <iostream>
#include <cmath>

class Solution
{
public:
 // Recursive function to find the number of ways to express x as sum of unique natural numbers raised to the power of n
 int getAllWays(int x, int n, int currentNum)
 {
  // Calculate the current number raised to the power n
  int power = pow(currentNum, n);

  // Base cases
  if (power > x)
   return 0; // If the power is greater than x, no solution is possible
  if (power == x)
   return 1; // If the power equals x, we found one way

  // Recursive calls
  // Case 1: Include the currentNum's power and continue with next number
  int include = getAllWays(x - power, n, currentNum + 1);
  // Case 2: Exclude the currentNum and try with the next number
  int exclude = getAllWays(x, n, currentNum + 1);

  // Return the sum of both cases
  return include + exclude;
 }

 // Wrapper function to start the recursion from number 1
 int getAllWays(int x, int n)
 {
  return getAllWays(x, n, 1);
 }
};

int main()
{
 // Input
 int x, n;
 std::cin >> x >> n;

 // Create a Solution object and call the function
 Solution solution;
 int result = solution.getAllWays(x, n);

 // Output the result
 std::cout << result << std::endl;

 return 0;
}

/*
In a challenging task assigned by Professor Smith, you need to determine the number of ways to distribute a certain number of resources, x, among departments using unique natural numbers raised to the power of n.



Each department can receive a different power of an integer, and no power can be reused. Write a program to calculate the number of distinct ways to express the resource total x as a sum of nth powers of unique natural numbers using a recursive function named getAllWays.



Example



Input:

10

2

Output:

1

Explanation

x = 10

n = 2

10 = 12 + 32, hence we have only 1 possibility.



Input:

100

2

Output:

3

Explanation

x = 100

n = 2

100 = 102 OR 62 + 82 OR 12 + 32 + 42 + 52 + 72, hence total 3 possibilities.



Company Tags: Google, Microsoft

Input format :
The input contains two integers: x and n, separated by a space.

x: The total amount of resources.
n: The power to which natural numbers are raised.
Output format :
The output consists of a single integer representing the number of distinct ways to express x as the sum of unique natural numbers raised to the power of n.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ x ≤ 105

1 ≤ n ≤ 10

Sample test cases :
Input 1 :
100 2
Output 1 :
3
Input 2 :
10 2
Output 2 :
1
*/