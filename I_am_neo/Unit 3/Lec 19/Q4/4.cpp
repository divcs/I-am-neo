/*
Problem Statement



Renisha wants to create a C++ program to generate a multiplication table for the given number. The program takes an integer 'n' as input, and if 'n' is less than or equal to 1000, it writes the multiplication table of n from 1 to 10 into a file called "tables.txt". Finally, the program reads the contents of the file and prints them in the console.



Note: Use a structure to store the value of 'n'.

Input format :
The input consists of an integer n.

Output format :
If n > 1000, the output prints "Exceeding Limit!" and terminates.

Otherwise, the output prints the multiplication table of n from 1 to 10 (inclusive) in separate lines.



Note: The output is printed in the format "1 x n = result", "2 x n = result", and so on.

Code constraints :
1 <= n <= 1000

Sample test cases :
Input 1 :
3
Output 1 :
1 x 3 = 3
2 x 3 = 6
3 x 3 = 9
4 x 3 = 12
5 x 3 = 15
6 x 3 = 18
7 x 3 = 21
8 x 3 = 24
9 x 3 = 27
10 x 3 = 30
Input 2 :
1245
Output 2 :
Exceeding Limit!
*/

/*
#include <iostream>
#include <fstream>
using namespace std;
struct Data
{
 int n;
};

int main()
{
 Data data;
 cin >> data.n;

 if (data.n > 1000)
 {
  cout << "Exceeding Limit!" << endl;
  return 0;
 }

 ofstream outFile("tables.txt");
 if (outFile.is_open())
 {
  for (int i = 1; i <= 10; ++i)
  {
   // Enter the missing code
  }
 }
 outFile.close();
 ifstream inFile("tables.txt");
 if (inFile.is_open())
 {
  string line;
  // Enter the missing code
  inFile.close();
 }
 return 0;
}
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Data
{
 int n;
};

int main()
{
 Data data;
 cin >> data.n;

 if (data.n > 1000)
 {
  cout << "Exceeding Limit!" << endl;
  return 0;
 }

 ofstream outFile("tables.txt");
 if (outFile.is_open())
 {
  for (int i = 1; i <= 10; ++i)
  {
   outFile << i << " x " << data.n << " = " << (i * data.n) << endl;
  }
  outFile.close();
 }

 ifstream inFile("tables.txt");
 if (inFile.is_open())
 {
  string line;
  while (getline(inFile, line))
  {
   cout << line << endl;
  }
  inFile.close();
 }

 return 0;
}
