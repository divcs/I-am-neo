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
#include <cmath>
#include <string>

class ExponentialCalculator
{
public:
 // Function to find the Kth digit from the end of N^M
 int findKthDigit(long long N, long long M, int K)
 {
  // Calculate N^M
  long long result = pow(N, M);

  // Convert the result to a string to easily access digits
  std::string resultStr = std::to_string(result);

  // Get the length of the result
  int len = resultStr.length();

  // Find the Kth digit from the end (1-based index)
  if (K > len)
   return -1; // Return -1 if K is greater than the length

  // Return the Kth digit from the end
  return resultStr[len - K] - '0';
 }
};

int main()
{
 // Input
 long long N, M;
 int K;
 std::cin >> N >> M >> K;

 // Create an instance of ExponentialCalculator
 ExponentialCalculator calculator;

 // Find and print the Kth digit
 int result = calculator.findKthDigit(N, M, K);
 std::cout << result << std::endl;

 return 0;
}
