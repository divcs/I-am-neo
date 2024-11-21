Problem Statement



Raju is developing a program for a language translation app. Users can input a sentence in English, and your program will dynamically allocate memory to create a reversed version of the sentence in English. The reversed sentence will be displayed as the user's translation.



Write a program that takes a string as input and dynamically allocates memory to create a reversed version of the string. The program should implement a function called reverseString that accepts the input string, dynamically allocates memory for the reversed string, and returns a pointer to the reversed string. Finally, print the reversed version of that given sentence.



Company Tag: Amcat

Input format :
The input contains a single line of text containing a sentence in English. The sentence can contain alphanumeric characters, punctuation, and spaces.

Output format :
The output displays the reversed version of the sentence in English in the following format: "Reversed String: [reversed string]".



Refer to the sample output for the formatting specifications.

Code constraints :
The length of the input sentence will not exceed 1000 characters.

The sentence can contain any printable ASCII characters, including spaces, punctuation, and digits.

The dynamic memory allocation should be used to create the reversed string.

Sample test cases :
Input 1 :
Hello 9876543210, how are you today ?
Output 1 :
Reversed string: ? yadot uoy era woh ,0123456789 olleH
Input 2 :
A man, a plan, a canal, Panama! Was it a car or a cat I saw? Madam, in Eden, I'm Adam!
Output 2 :
Reversed string: !madA m'I ,nedE ni ,madaM ?was

#include <iostream>
#include <cstring>  // For strlen
using namespace std;

// Function to reverse the input string
char* reverseString(const char* str, int* length) {
    *length = strlen(str);                     // Calculate the length and store it in the dynamic int
    char* reversedStr = new char[*length + 1]; // Allocate memory for the reversed string
+
    // Fill the reversed string by iterating backwards through the original
    for (int i = 0; i < *length; ++i) {
        reversedStr[i] = str[*length - 1 - i];
    }
    reversedStr[*length] = '\0';               // Null-terminate the reversed string

    return reversedStr;                        // Return the dynamically allocated reversed string
}

int main() {
    // Dynamically allocate memory for the input sentence
    char* input = new char[1001];  // Allocating 1001 characters to allow space for null terminator
    int* length = new int;         // Dynamically allocate memory for an integer to store the length

    // Get the input sentence
    cout << "Enter a sentence: ";
    cin.getline(input, 1000);  // Read the input sentence, up to 1000 characters

    // Reverse the string
    char* reversed = reverseString(input, length);

    // Display the reversed string
    cout << "Reversed string: " << reversed << endl;

    // Deallocate memory
    delete[] input;
    delete length;
    delete[] reversed;

    return 0;
}
