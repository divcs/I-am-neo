#include <iostream>
#include <vector>
#include <string>

class PalindromeFinder
{
public:
 // Inline member function to check if a number is a palindrome
 inline bool isPalindrome(int num)
 {
  std::string str = std::to_string(num);
  int n = str.length();

  // Check if the string is the same forward and backward
  for (int i = 0; i < n / 2; ++i)
  {
   if (str[i] != str[n - i - 1])
   {
    return false;
   }
  }
  return true;
 }

 // Function to find palindromes between l and u using call by reference
 void findPalindromes(int l, int u, std::vector<int> &palindromes)
 {
  for (int i = l; i <= u; ++i)
  {
   if (isPalindrome(i))
   {
    palindromes.push_back(i);
   }
  }
 }
};

int main()
{
 // Input
 int l, u;
 std::cin >> l >> u;

 // Create an instance of PalindromeFinder
 PalindromeFinder finder;

 // Vector to store palindromes
 std::vector<int> palindromes;

 // Find palindromes between l and u
 finder.findPalindromes(l, u, palindromes);

 // Output
 if (palindromes.empty())
 {
  std::cout << "No palindromes found" << std::endl;
 }
 else
 {
  for (int num : palindromes)
  {
   std::cout << num << " ";
  }
  std::cout << std::endl;
 }

 return 0;
}

/*
Mr. Watson, an avid mathematician needs to find all palindrome numbers between two given limits l and u. Help him write a program using a class PalindromeFinder with an inline member function isPalindrome and a findPalindromes method that uses call by reference to efficiently identify and print these numbers.



Company Tags: Accenture

Input format :
The input contains two integers l and u separated by a space, where l is the lower limit and u is the upper limit.

Output format :
The output prints all palindrome numbers between the given limits in a single line, separated by spaces.

If no palindromes are found, print "No palindromes found"



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ l < u ≤ 1000

Both l and u are inclusive while printing palindrome numbers.

Sample test cases :
Input 1 :
10 80
Output 1 :
11 22 33 44 55 66 77
Input 2 :
12 15
Output 2 :
No palindromes found
Input 3 :
111 222
Output 3 :
111 121 131 141 151 161 171 181 191 202 212 222

*/