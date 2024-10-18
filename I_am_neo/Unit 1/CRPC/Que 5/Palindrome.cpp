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
