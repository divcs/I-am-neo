#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

double calculateAverageWordLength(string sentence)
{
 istringstream iss(sentence);
 string word;
 int wordCount = 0;
 int totalCharacters = 0;

 while (getline(iss, word, ' '))
 {
  wordCount++;
  totalCharacters += word.length();
 }

 if (wordCount == 0)
 {
  return 0.0; // Handle empty sentences or sentences with no words
 }

 return static_cast<double>(totalCharacters) / wordCount;
}

int main()
{
 string sentence;
 getline(cin, sentence);

 double averageLength = calculateAverageWordLength(sentence);
 cout << fixed << setprecision(3) << averageLength << endl;

 return 0;
}