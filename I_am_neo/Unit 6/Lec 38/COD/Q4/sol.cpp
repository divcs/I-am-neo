#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool isAlphanumeric(const string &str)
{
 return all_of(str.begin(), str.end(), [](char c)
               { return isalnum(c); });
}

bool isAllAlphabetic(const string &str)
{
 return all_of(str.begin(), str.end(), [](char c)
               { return isalpha(c); });
}
int main()
{
 try
 {
  string username;
  string pass;

  cin >> username;
  cin >> pass;

  if (isAlphanumeric(pass) && pass.size() >= 6)
  {
   if (isAllAlphabetic(pass))
   {
    throw(pass);
   }
   cout << "Password is correct";
  }
  else
  {
   throw(pass);
  }
 }
 catch (string pass)
 {
  if (pass.length() < 6)
  {
   cout << "Password must be at least 6 characters long\n";
   cout << "Caught by Exception\n";
   cout << "Invalid Password Format!\n";
  }
  else if (isAllAlphabetic(pass))
  {
   cout << "Password must have at least one digit\n";
   cout << "Caught by Exception\n";
   cout << "Invalid Password Format!\n";
  }
 }
 return 0;
}
