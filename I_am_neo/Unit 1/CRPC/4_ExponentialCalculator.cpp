// #include <iostream>
// using namespace std;

// class ExponentialCalculator
// {
//  int num;
//  int pow;

// public:
//  ExponentialCalculator(int n, int p)
//  {
//   num = n;
//   pow = p;
//  }
//  int calculate()
//  {
//   int result = 1;
//   for (int i = 1; i <= pow; i++)
//   {
//    result *= num;
//   }
//   return result;
//  }

//  int KthDigit(int num, int d)
//  {
//   int result = 0;
//   for (int i = 1; i <= d; i++)
//   {
//    result = num % 10;
//    num = num / 10;
//   }
//   return result;
//  }
// };
// int main()
// {
//  int num, pow, k;
//  cout << "Enter number: " << endl;
//  cin >> num;

//  cout << "Enter power: " << endl;
//  cin >> pow;
//  ExponentialCalculator ec(num, pow);
//  int number = ec.calculate();

//  cout << "Enter Kth digit: " << endl;
//  cin >> k;
//  cout << ec.KthDigit(number, k);

//  return 0;
// }

#include <iostream>
using namespace std;

class ExponentialCalculator
{
public:
 int findKthDigit(int num, int pow, int k)
 {
  // Calculate num^pow
  int result = 1;
  for (int i = 1; i <= pow; i++)
  {
   result *= num;
  }

  // Find the k-th digit of the result
  int kthDigit = 0;
  for (int i = 1; i <= k; i++)
  {
   kthDigit = result % 10; // Get the last digit
   result = result / 10;   // Remove the last digit
  }

  return kthDigit; // Return the K-th digit
 }
};

int main()
{
 int num, pow, k;
 // cout << "Enter number: " << endl;
 cin >> num;

 // cout << "Enter power: " << endl;
 cin >> pow;

 // cout << "Enter Kth digit: " << endl;
 cin >> k;

 ExponentialCalculator ec;
 int kthDigit = ec.findKthDigit(num, pow, k);
 cout << kthDigit;
 // cout << "The " << k << "th digit is: " << kthDigit << endl;

 return 0;
}

// --------------------------
#include <iostream>
#include <cmath>  // For pow function
#include <string> // For string manipulation

using namespace std;

class ExponentialCalculator
{
public:
 // Method to find the K-th digit from the end of N raised to the power M
 int findKthDigit(long long N, long long M, int K)
 {
  // Calculate N^M
  long long result = pow(N, M);         // Calculate power
  string resultStr = to_string(result); // Convert to string to easily access digits

  // Check if K is valid (1-based index)
  if (K > resultStr.length())
  {
   return -1; // If K is greater than the number of digits, return -1 or an invalid value
  }

  // Get K-th digit from the end
  char kthDigit = resultStr[resultStr.length() - K]; // Access the K-th digit from the end
  return kthDigit - '0';                             // Convert char to int
 }
};

int main()
{
 long long N, M;
 int K;

 cout << "Enter values for N, M, and K (space-separated): ";
 cin >> N >> M >> K;

 ExponentialCalculator ec;
 int kthDigit = ec.findKthDigit(N, M, K);

 // Output the result
 if (kthDigit != -1)
 {
  cout << kthDigit << endl; // Print the K-th digit
 }
 else
 {
  cout << "Error: K is greater than the number of digits in N^M." << endl;
 }

 return 0;
}