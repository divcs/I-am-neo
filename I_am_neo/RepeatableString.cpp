#include <iostream>
#include <string>
using namespace std;

class RString
{
 string str;

public:
 RString(string s) : str(s) {};

 RString operator*(int n)
 {
  string temp = "";
  for (int i = 0; i < n; i++)
  {
   temp += str;
  }
  return RString(temp);
 }

 void display()
 {
  cout << str;
 }
};

int main()
{
 string s;
 int n;
 cin >> s;
 cin >> n;

 RString s1(s);
 RString s2 = s1 * n;
 s2.display();

 return 0;
}