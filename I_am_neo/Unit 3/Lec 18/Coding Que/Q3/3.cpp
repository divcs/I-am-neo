/*
Problem Statement:



Meena likes to save the quotes from the books she reads. Help her by writing a program to save those quotes to a file called "quotes.txt". Your program should contain the following:



The goal of this program is to read quotes from the user and store them in a file. Later, it retrieves the quotes from the file and displays them on the console. The user can enter multiple quotes until they input a dot (.) to indicate the end of quotes.

Input format :
The input consists of the quotes as input, each on a separate line.

The quotes should be terminated by entering a dot (.) on a new line.

Output format :
The output displays the quotes stored in the file quotes.txt



Refer to the sample output for format specifications.

Code constraints :
The maximum length of each quote is limited by the available memory.

The total number of quotes is not restricted.

Sample test cases :
Input 1 :
I solemnly swear that I am up to no good
Happiness can be found, even in the darkest of times, if one only remembers to turn on the light
Mischief Managed
What you fear most of all is —fear
.
Output 1 :
I solemnly swear that I am up to no good
Happiness can be found, even in the darkest of times, if one only remembers to turn on the light
Mischief Managed
What you fear most of all is —fear
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ofstream outputFile("quotes.txt");
 string quote;

 while (getline(cin, quote) && quote != ".")
 {
  outputFile << quote << endl;
 }

 outputFile.close();

 ifstream inputFile("quotes.txt");
 string line;

 cout << endl;

 while (getline(inputFile, line))
 {
  cout << line << endl;
 }
 inputFile.close();
 return 0;
}