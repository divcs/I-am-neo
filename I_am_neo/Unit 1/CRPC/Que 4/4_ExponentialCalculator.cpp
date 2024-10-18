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

/*
Virat, fascinated by number theory, challenges you to develop a program that finds the Kth digit of the number obtained by raising a base integer N to the power of an exponent M.



Using a class called ExponentialCalculator, implement a method findKthDigit to compute this digit. The method should efficiently handle the calculation and extraction of the Kth digit from the end of the result of NM.



Company Tags: Flipkart

Input format :
The input consists of three space-separated integers N, M, and K.

N is of type long long, representing the base number.
M is of type long long, representing the exponent.
K is of type int, representing the position of the digit to extract (1-based index from the end).
Output format :
The output prints an integer, representing the Kth digit of NM.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ M, N ≤ 15

Sample test cases :
Input 1 :
2 4 2
Output 1 :
1
Input 2 :
4 3 2
Output 2 :
6
Input 3 :
15 15 15
Output 3 :
8
*/