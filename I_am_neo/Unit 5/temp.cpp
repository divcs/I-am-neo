#include <iostream>
#include <cstring>
using namespace std;

char *reversedString(const char *str)
{
 int len = strlen(str);
 char *reversed = new char[len + 1];

 for (int i = 0; i < len; i++)
 {
  reversed[i] = str[len - i - 1];
 }
 reversed[len] = '\0';
 return reversed;
}

int main()
{
 string sentence;
 cout << "Enter a sentence: ";
 getline(cin, sentence); // Read the entire input sentence including spaces

 // Call reverseString function to get the reversed string
 char *reversedSentence = reversedString(sentence.c_str());

 // Output the reversed sentence in the required format
 cout << "Reversed string: " << reversedSentence << endl;

 // Free the dynamically allocated memory
 delete[] reversedSentence;
}