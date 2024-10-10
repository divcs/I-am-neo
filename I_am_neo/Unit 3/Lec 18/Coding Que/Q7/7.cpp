/*
Sara is developing a program for a mathematics teacher who wants to generate practice exercises for their students. The teacher wants a program that can generate a file with a specified number of practice questions. Each question should contain a unique integer from 1 to the given count.



Write a program that takes an integer, representing the count of practice questions, as input. The program should generate a file named "numbers.txt" and populate it with the practice questions. Each question should be written on a separate line and should consist of a unique integer from 1 to the given count. After successfully setting up the file, the program should print "Success" to indicate the completion of the task.



Note: This is a sample question asked in an HCL interview.

Input format :
The input contains an integer representing the count of practice questions (numberCount).

Output format :
If the setup of the practice questions and file is successful, the program will print "Success" to the console.



Refer to the sample output for the formatting specifications.

Code constraints :
The input value for numberCount should be within the range of integer values.

The program assumes that the file "numbers.txt" is writable in the current directory.

Sample test cases :
Input 1 :
10
Output 1 :
Success
Input 2 :
-25
Output 2 :
Success
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 // Step 1: Input the number of practice questions (count)
 int numberCount;
 cin >> numberCount;

 // Step 2: Create the file "numbers.txt"
 ofstream outFile("numbers.txt");

 // Step 3: Write unique integers from 1 to numberCount if it's positive
 if (numberCount > 0)
 {
  for (int i = 1; i <= numberCount; ++i)
  {
   outFile << i << endl;
  }
 }

 // Step 4: Close the file
 outFile.close();

 // Step 5: Print Success after successfully generating the file
 cout << "Success" << endl;

 return 0;
}
