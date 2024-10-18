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
