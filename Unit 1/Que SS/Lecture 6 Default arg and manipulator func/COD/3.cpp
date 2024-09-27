//// You are using GCC
#include <iostream>
#include <vector>

void generatePrimesInRange(int start, int end)
{
 std::vector<int> primes;

 // Ensure the range is valid and start is less than or equal to end
 if (start > end)
 {
  std::cout << "Invalid range" << std::endl;
  return;
 }

 // Helper lambda function to check for prime numbers
 auto isPrime = [](int n)
 {
  if (n <= 1)
   return false;
  for (int i = 2; i * i <= n; ++i)
  {
   if (n % i == 0)
    return false;
  }
  return true;
 };

 // Generate primes in the given range
 for (int i = start; i <= end; ++i)
 {
  if (isPrime(i))
  {
   primes.push_back(i);
  }
 }

 // Display the found primes
 for (size_t i = 0; i < primes.size(); ++i)
 {
  std::cout << primes[i];
  if (i < primes.size() - 1)
  {
   std::cout << " ";
  }
 }
 std::cout << std::endl;
}

int main()
{
 int start, end;
 std::cin >> start >> end;

 generatePrimesInRange(start, end);
 return 0;
}