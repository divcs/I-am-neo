/*
Regina wants to store the student data in a file and retrieve it. Write a program to save the student ID along with five of their marks in a file called "marks.dat"  retrieve the same, and print it.

Note: This is a sample question asked in an Accenture interview.
Input format :
The first line of input contains N, which represents the number of students.
The next N lines of input contain the student ID, followed by 5 marks.
Output format :
The output displays a comma-separated list of all student data.

Refer to the sample output for formatting specifications.
Code constraints :
The program expects exactly five marks per student.
The program assumes that the file "marks.dat" is writable and readable in the current directory.

Sample test cases :
Input 1 :
5 1 10 20 30 40 50 2 20 30 40 50 60 3 30 40 50 60 70 4 20 40 60 80 20 5 40 45 60 70 80
Output 1 :
1,10,20,30,40,50, 2,20,30,40,50,60, 3,30,40,50,60,70, 4,20,40,60,80,20, 5,40,45,60,70,80,
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 // Step 1: Input the number of students
 int N;
 cin >> N;

 // Step 2: Open the file "marks.dat" to store student data
 ofstream outFile("marks.dat");

 // Step 3: Write student ID and their 5 marks to the file
 for (int i = 0; i < N; ++i)
 {
  int studentID;
  cin >> studentID;
  outFile << studentID; // Write student ID

  // Write the 5 marks for the student
  for (int j = 0; j < 5; ++j)
  {
   int mark;
   cin >> mark;
   outFile << "," << mark;
  }
  outFile << "," << endl; // Add a trailing comma and newline after each student data
 }

 // Step 4: Close the output file
 outFile.close();

 // Step 5: Open the file "marks.dat" to read and display the stored data
 ifstream inFile("marks.dat");
 string line;

 // Step 6: Read and print each line with the required trailing comma
 while (getline(inFile, line))
 {
  cout << line << endl; // Print each line (which already contains the trailing comma)
 }

 // Step 7: Close the input file
 inFile.close();

 return 0;
}
