/*
Banu wants to write a program that allows her to enter text and count values. The program will store the given text multiple times in a file named "sample.txt". Later, Banu wants to read the contents of the file and display them on the console.



You should write the main() method where you call the setup code, and if it returns 0, then proceed to do the following:



a) check if the file is open

b) read through the contents of the file

c) check if the eof is reached and if yes, then print "End of file reached"

d) close the file.



If the setup code fails, then return non-zero, upon receiving it the main method will print "Unable to setup data." If you cannot open the file for either reading or writing, then you have to print "Unable to open a file."



Company Tag: Accenture

Input format :
The first line of input consists of text (a single line).

The second line input consists of a count value, indicating the number of times the text should be repeated in the file.

Output format :
The output displays, Create, or overwrites the file "sample.txt" and stores the given text multiple times, according to the count value.

The output displays the contents of the file and displays each line on the console.

If the end of the file is reached, the output displays the message "End of file reached".



Refer to the sample output for the formatting specifications.

Code constraints :
Length of the text <= 10

Sample test cases :
Input 1 :
HelloWorld
10
Output 1 :
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
End of file reached
Input 2 :
Universal
4
Output 2 :
Universal
Universal
Universal
Universal
End of file reached
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to setup the file
int setup(const string &text, int count)
{
 ofstream outfile("sample.txt");
 if (!outfile.is_open())
 {
  return -1; // Unable to open file for writing
 }

 // Write the text to the file multiple times
 for (int i = 0; i < count; i++)
 {
  outfile << text << endl;
 }

 outfile.close(); // Close the file after writing
 return 0;        // Successful setup
}

// Main function
int main()
{
 string text;
 int count;

 // Input the text and count value
 // cout << "Enter the text (max length 10): ";
 getline(cin, text);
 // cout << "Enter the count: ";
 cin >> count;

 // Validate input length
 if (text.length() > 10)
 {
  cout << "Text length exceeds 10 characters." << endl;
  return -1;
 }

 // Call setup function
 int result = setup(text, count);
 if (result != 0)
 {
  cout << "Unable to setup data." << endl;
  return result; // Return non-zero if setup fails
 }

 // Open the file for reading
 ifstream infile("sample.txt");
 if (!infile.is_open())
 {
  cout << "Unable to open a file." << endl;
  return -1; // Return non-zero if file cannot be opened
 }

 // Read and display the contents of the file
 string line;
 while (getline(infile, line))
 {
  cout << line << endl;
 }

 cout << "End of file reached" << endl; // Indicate end of file
 infile.close();                        // Close the file after reading

 return 0; // Successful execution
}



//

#include <iostream>
#include <fstream>
#include <string>
#include <limits> // Include limits for std::numeric_limits
using namespace std;
// Function to setup the file
int setup(const string &text, int count)
{
 ofstream outfile("sample.txt");
 if (!outfile.is_open())
 {
 }
 return -1; // Unable to open file for writing
 // write the text to the file multiple times
 for (int i = 0; i < count; i++)
 {
  outfile << text << endl;
 }
 outfile.close(); // Close the file after writing
 return 0;
 // Successful setup
}
// Main function
int main()
{
 string text;
 int count;
 getline(cin, text);
 // Validate input length
 if (text.length() > 10)
 {
  cout << "Text length exceeds 10 characters." << endl;
  return -1;
 }
 while (!(cin >> count) || count <= 0) // Validate count input
 {
  cin.clear();    // Clear the error flag
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
 }

 // Call setup function
 int result = setup(text, count);
 if (result != 0)
 {
  cout << "Unable to setup data." << endl;
  return -1;
 }
 // Read and display the contents of the file
 string line;
 while (getline(infile, line))
 {
  cout << line << endl;
 }
 cout << "End of file reached" << endl; // Indicate end of file
 infile.close();
 return 0; // Successful execution
           // Close the file after reading
}