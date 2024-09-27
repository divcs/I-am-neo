#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
 string str;
 getline(cin, str);

 // Use a map to track character occurrences
 unordered_map<char, bool> seenChars;

 string result;
 for (char c : str)
 {
  if (seenChars.find(c) == seenChars.end())
  {
   // Character not seen before, add it to the result and mark it as seen
   result += c;
   seenChars[c] = true;
  }
 }

 cout << result << endl;

 return 0;
}