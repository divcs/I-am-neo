// 2. Write a program to append text to a file and display its contents.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ofstream outputFile("output.txt", ios::app); // Open file in append mode
 string userText;

 if (outputFile.is_open())
 {
  cout << "Enter text to append to the file (type 'exit' to stop):\n";
  while (true)
  {
   getline(cin, userText); // Get user input
   if (userText == "exit")
   {
    break; // Exit the loop if user types 'exit'
   }
   outputFile << userText << endl; // Append the input text to the file
  }
  outputFile.close(); // Close the file after writing

  // Now, read and display the contents of the file
  ifstream inputFile("output.txt");
  cout << "\nContents of the file:\n";
  string line;
  while (getline(inputFile, line))
  {
   cout << line << endl; // Display each line
  }
  inputFile.close(); // Close the file after reading
 }
 else
 {
  cout << "Unable to open the file for writing!" << endl;
 }
 return 0;
}
