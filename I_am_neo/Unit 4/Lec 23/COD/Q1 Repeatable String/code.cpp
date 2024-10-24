#include <iostream>
#include <string>

using namespace std;

class RepeatableString
{
private:
 string str; // The string to be repeated

public:
 // Constructor to initialize the string
 RepeatableString(string s) : str(s) {}

 // Overloading the * operator to repeat the string 'n' times
 string operator*(int n)
 {
  string repeatedStr = "";
  for (int i = 0; i < n; ++i)
  {
   repeatedStr += str;
  }
  return repeatedStr;
 }
};

int main()
{
 string inputString;
 int repetitions;

 // Reading input
 getline(cin, inputString);
 cin >> repetitions;

 // Creating an instance of RepeatableString
 RepeatableString repeatableStr(inputString);

 // Using the overloaded * operator to repeat the string
 string result = repeatableStr * repetitions;

 // Displaying the result
 cout << "Result: " << result << endl;

 return 0;
}
