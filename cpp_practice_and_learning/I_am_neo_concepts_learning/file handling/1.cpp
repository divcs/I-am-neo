// 1. Write a program to read a list of names from a file and output them to the console.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ifstream inputFile("names.txt"); // Open the file for reading
 string name;

 if (inputFile.is_open())
 {
  cout << "Names in the file:\n";
  while (getline(inputFile, name))
  {                      // Read line by line
   cout << name << endl; // Display each name
  }
  inputFile.close(); // Close the file
 }
 else
 {
  cout << "Unable to open the file!" << endl;
 }
 return 0;
}
