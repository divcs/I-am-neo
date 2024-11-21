#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
using namespace std;

int main()
{
 string num;
 cin >> num;

 bool allDigitsOnly = all_of(num.begin(), num.end(), ::isdigit);

 if (num != "")
 {
  if (!allDigitsOnly)
  {
   cout << "Invalid input" << endl;
  }
  else if (num.size() > 10 || num.size() < 10)
  {
   cout << num << endl;
   cout << "The mobile number should have 10 digits" << endl;
  }
  else
  {
   cout << num << endl;
   cout << "The entered mobile number is valid" << endl;
  }
 }

 return 0;
}
