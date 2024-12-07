// 3. Create a program that takes user input and writes it to a file.Then, read and display the contents of the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ofstream outputFile("user_input.txt"); // Open the file for writing
 string userInput;

 if (outputFile.is_open())
 {
  cout << "Enter text to write to the file (type 'end' to stop):\n";
  while (true)
  {
   getline(cin, userInput); // Get user input
   if (userInput == "end")
   {
    break; // Exit if user types 'end'
   }
   outputFile << userInput << endl; // Write input to the file
  }
  outputFile.close(); // Close the file after writing

  // Read and display the contents of the file
  ifstream inputFile("user_input.txt");
  cout << "\nContents of the file:\n";
  string line;
  while (getline(inputFile, line))
  {
   cout << line << endl; // Display each line from the file
  }
  inputFile.close(); // Close the file after reading
 }
 else
 {
  cout << "Unable to open the file!" << endl;
 }
 return 0;
}
