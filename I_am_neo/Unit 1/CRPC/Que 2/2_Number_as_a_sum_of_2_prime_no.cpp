#include <iostream>
#include <vector>

class Prime
{
public:
 // Inline method to check if a number is prime
 inline bool is_prime(int n) const
 {
  if (n <= 1)
   return false;
  for (int i = 2; i * i <= n; ++i)
  {
   if (n % i == 0)
    return false;
  }
  return true;
 }
};

int main()
{
 int n;
 std::cin >> n;

 Prime primeChecker;
 std::vector<int> primes;

 // Find all prime numbers up to n
 for (int i = 2; i <= n; ++i)
 {
  if (primeChecker.is_prime(i))
  {
   primes.push_back(i);
  }
 }

 bool found = false;

 // Check for pairs of prime numbers whose sum equals n
 for (size_t i = 0; i < primes.size(); ++i)
 {
  for (size_t j = i; j < primes.size(); ++j)
  {
   if (primes[i] + primes[j] == n)
   {
    std::cout << primes[i] << " and " << primes[j] << std::endl;
    found = true;
    break; // Exit inner loop after first successful pair
   }
  }
  if (found)
   break; // Exit outer loop if a pair is found
 }

 if (!found)
 {
  std::cout << n << " cannot be expressed as the sum of two prime numbers" << std::endl;
 }

 return 0;
}

/*
Problem Statement

Derek needs to determine if a given integer can be expressed as the sum of two prime numbers. Implement a Prime class with an inline method is_prime to check for prime numbers.

In the main function, use this method to find and print the first pair of prime numbers whose sum equals the given integer. If no such pair exists, print a message indicating that the number cannot be expressed as the sum of two prime numbers.

Input format :
The input consists of a single integer n.

Output format :
If n can be expressed as the sum of two prime numbers, print the pair in the format: "X and Y" where X and Y are the prime numbers.

If no such pair exists, print: "n cannot be expressed as the sum of two prime numbers".

Refer to the sample output for the formatting specifications.

Code constraints :
2 ≤ n ≤ 105

Sample test cases :
Input 1 :
34
Output 1 :
3 and 31
Input 2 :
23
Output 2 :
23 cannot be expressed as the sum of two prime numbers
Input 3 :
12
Output 3 :
5 and 7
*/