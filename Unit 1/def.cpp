#include <iostream>

void rotate(int &a, int &b, int &c)
{
 int temp = a;
 a = b;
 b = c;
 c = temp;
}

int &getSmallest(int &a, int &b, int &c)
{
 return (a < b && a < c) ? a : (b < c ? b : c); // Return the reference to the smallest
}

int main()
{
 int x, y, z;
 std::cin >> x >> y >> z;

 // Display values before rotation
 std::cout << "Before Rotation: x: " << x << " y: " << y << " z: " << z << std::endl;

 // Rotate dimensions
 rotate(x, y, z);

 // Display values after rotation
 std::cout << "After Rotation: x: " << x << " y: " << y << " z: " << z << std::endl;

 // Get and display the smallest value
 int &smallest = getSmallest(x, y, z);
 std::cout << "The smallest value among x, y, z: " << smallest << std::endl;

 return 0;
}

//

#include <iostream>
#include <vector>

int sum(int n, const std::vector<int> &transactions)
{
 int total = 0;
 for (int i = 0; i < n; ++i)
 {
  total += transactions[i];
 }
 return total;
}

int main()
{
 int n;
 std::cin >> n;

 // Check that n is within the allowed range
 if (n < 1 || n > 10)
 {
  std::cout << "Invalid number of transactions. Must be between 1 and 10." << std::endl;
  return 1;
 }

 std::vector<int> transactions(n);

 for (int i = 0; i < n; ++i)
 {
  std::cin >> transactions[i];
  // Check that each amount is within the allowed range
  if (transactions[i] < 0 || transactions[i] > 1000)
  {
   std::cout << "Invalid transaction amount. Must be between 0 and 1000." << std::endl;
   return 1;
  }
 }

 int totalRevenue = sum(n, transactions);

 std::cout << totalRevenue << std::endl;
 return 0;
}

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