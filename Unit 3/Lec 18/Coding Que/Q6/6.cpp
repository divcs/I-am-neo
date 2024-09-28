/*
Praveen has been assigned the task of developing a program that manages a file containing numbers. The program needs to perform the following operations:



Setup the initial file: The program should generate a file named "numbers.txt" and populate it with a given count of numbers starting from 1. Each number should be written on a separate line.



Check if the file is empty: After setting up the initial file, the program needs to check if the file is empty or contains any numbers.



File manipulation based on emptiness: Depending on whether the file is empty or not, the program needs to perform the following actions:

If the file is empty, add a specified number of additional numbers starting from 100 to the file.
If the file is not empty, consider the operation a failure.


Write a program that takes an integer as input, representing the count of initial numbers to set up the file (numberCount). The program should perform the necessary file operations according to the problem statement and output the appropriate success or failure message.



Note: This is a sample question asked in an Amcat interview.

Input format :
The input contains an integer representing the count of initial numbers to set up the file (numberCount).

Output format :
If the file is empty the first time, print "File is empty".

Before adding the count of numbers starting from 100, print the message according to the output.

If the file is not empty after completing the writing, then print "Success" otherwise print "Failed"



Refer to the sample output for the formatting specifications.

Code constraints :
The input value for numberCount should be within the range of integer values.

The program assumes that the file "numbers.txt" is writable and readable in the current directory.

Sample test cases :
Input 1 :
10
Output 1 :
File is empty
Adding 10 numbers starting from 100
Success
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to check if a file is empty or not
bool isFileEmpty(ifstream &file)
{
 return file.peek() == ifstream::traits_type::eof();
}

int main()
{
 // Step 1: Input the count of initial numbers
 int numberCount;
 cin >> numberCount;

 // Step 2: Create the initial file "numbers.txt" (without writing anything initially)
 ofstream outFile("numbers.txt");
 outFile.close();

 // Step 3: Open the file to check if it's empty
 ifstream inFile("numbers.txt");
 if (isFileEmpty(inFile))
 {
  cout << "File is empty" << endl;
  inFile.close();

  // Step 4: Add additional numbers starting from 100
  ofstream outFile("numbers.txt", ios::app); // open file in append mode
  cout << "Adding " << numberCount << " numbers starting from 100" << endl;
  for (int i = 100; i < 100 + numberCount; ++i)
  {
   outFile << i << endl;
  }
  outFile.close();

  // Step 5: Verify if the file now contains numbers and print Success or Failed
  inFile.open("numbers.txt");
  if (!isFileEmpty(inFile))
  {
   cout << "Success" << endl;
  }
  else
  {
   cout << "Failed" << endl;
  }
  inFile.close();
 }
 else
 {
  // File is not empty after initial population
  cout << "File is not empty" << endl;
 }

 return 0;
}
