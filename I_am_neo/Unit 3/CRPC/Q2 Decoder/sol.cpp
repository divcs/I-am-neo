#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Decoder
{
 string digits;

public:
 // Parameterized Constructor
 Decoder(const string &sequence) : digits(sequence) {}

 // Copy Constructor
 Decoder(const Decoder &other) : digits(other.digits) {}

 // Destructor
 ~Decoder()
 {
  cout << "Decoder object is being destroyed" << endl;
 }

 // Method to count possible decodings
 int countDecodings()
 {
  int n = digits.size();

  if (n == 0 || digits[0] == '0')
  {
   return 0; // No valid decoding if the string starts with '0' or is empty
  }

  vector<int> dp(n + 1, 0);
  dp[0] = 1; // Base case: an empty string has one way to be decoded
  dp[1] = digits[0] != '0' ? 1 : 0;

  for (int i = 2; i <= n; ++i)
  {
   int oneDigit = digits[i - 1] - '0';            // Current single digit
   int twoDigits = stoi(digits.substr(i - 2, 2)); // Current two-digit number

   if (oneDigit >= 1)
   {
    dp[i] += dp[i - 1]; // Add count if single-digit decoding is valid
   }

   if (twoDigits >= 10 && twoDigits <= 26)
   {
    dp[i] += dp[i - 2]; // Add count if two-digit decoding is valid
   }
  }

  return dp[n];
 }
};

int main()
{
 string sequence;
 cout << "Enter digit sequence: ";
 cin >> sequence;

 // Create Decoder object
 Decoder decoder(sequence);

 // Output the count of decodings
 cout << "Possible count of decodings of the sequence: " << decoder.countDecodings() << endl;

 // The destructor message will appear when the object goes out of scope
 return 0;
}
