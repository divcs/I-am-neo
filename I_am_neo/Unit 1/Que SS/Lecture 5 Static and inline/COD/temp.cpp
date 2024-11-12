// #include <iostream>
// #include <string>
// using namespace std;

// void reversedString(string s)
// {

//  int len = s.length();
//  string *str = new string(s);

//  for (int i = len - 1; i >= 0; i--)
//  {
//   cout << *str;
//  }
// }

// int main()
// {
//  string s;
//  cin >> s;

//  reversedString(s);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//  string s;
//  getline(cin, s);

//  int len = s.length();
//  for (int i = len - 1; i >= 0; i--)
//  {
//   cout << s[i];
//  }

//  return 0;
// }

#include <iostream>
using namespace std;

int main()
{
 string s;
 getline(cin, s);

 int len = s.length();
 string *str = &s;

 for (int i = 0; i < len; i++)
 {
  *(str + len - 1) = s[i];
  cout << *(str + len - 1);
 }
 return 0;
}
