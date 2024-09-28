/*
Help Rita to write a program that performs file operations on the text file "sample.txt". The program should allow the user to input a string, which will be written to the file. Then, the program should read the contents of the file and display them on the console.
Input format :
The input consists of a string, which can be a word or a sentence.
Output format :
The output displays the contents written in the file.

Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
C++ is the most widely used System Programming Language.
Output 1 :
C++ is the most widely used System Programming Language.
Input 2 :
1234 ABCD @#$%
Output 2 :
1234 ABCD @#$%
Input 3 :
Landslide!
Output 3 :
Landslide!
*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
 std::string input;

 // Input a string from the user
 std::cout << "Enter a string: ";
 std::getline(std::cin, input);

 // Open the file for writing
 std::ofstream outfile("sample.txt");
 if (outfile.is_open())
 {
  // Write the input string to the file
  outfile << input << std::endl;
  // Close the file
  outfile.close();
 }
 else
 {
  std::cerr << "Error opening file for writing." << std::endl;
  return 1; // Exit if file could not be opened
 }

 // Open the file for reading
 std::ifstream infile("sample.txt");
 if (infile.is_open())
 {
  std::string line;
  // Read and display the contents of the file
  while (std::getline(infile, line))
  {
   std::cout << line << std::endl; // Output each line
  }
  // Close the file
  infile.close();
 }
 else
 {
  std::cerr << "Error opening file for reading." << std::endl;
  return 1; // Exit if file could not be opened
 }

 return 0;
}
