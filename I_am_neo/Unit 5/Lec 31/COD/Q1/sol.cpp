// using pointers

#include <iostream>
#include <cstring> // For strlen
using namespace std;

char *reverseString(const char *input)
{
    int len = strlen(input);            // Get the length of the input string
    char *reversed = new char[len + 1]; // Dynamically allocate memory for the reversed string

    // Reverse the string manually
    for (int i = 0; i < len; ++i)
    {
        reversed[i] = input[len - i - 1]; // Copy characters in reverse order
    }

    reversed[len] = '\0'; // Null-terminate the reversed string
    return reversed;      // Return the pointer to the reversed string
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); // Read the entire input sentence including spaces

    // Call reverseString function to get the reversed string
    char *reversedSentence = reverseString(sentence.c_str());

    // Output the reversed sentence in the required format
    cout << "Reversed string: " << reversedSentence << endl;

    // Free the dynamically allocated memory
    delete[] reversedSentence;

    return 0;
}

// using simple approach

#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &input)
{
    int len = input.length();
    string reversed(len, '\0'); // Create a string of the same length, initialized with null characters

    // Reverse the string manually
    for (int i = 0; i < len; ++i)
    {
        reversed[i] = input[len - i - 1];
    }

    return reversed; // Return the reversed string
}

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); // Read entire line as input

    // Call reverseString and store the result
    string reversedSentence = reverseString(sentence);

    // Output the reversed sentence in the specified format
    cout << "Reversed string: " << reversedSentence << endl;

    return 0;
}
