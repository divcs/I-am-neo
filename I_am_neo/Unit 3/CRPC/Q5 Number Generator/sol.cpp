#include <iostream>
#include <fstream>
#include <queue>
#include <string>
using namespace std;

class NumberGenerator
{
public:
 // Method to generate numbers in the custom system and write them to a file
 void generateNumbers(int n)
 {
  ofstream outFile("numbers.txt");
  if (!outFile)
  {
   cerr << "Error opening file!" << endl;
   return;
  }

  // BFS approach using a queue to generate numbers in the custom system
  queue<string> q;
  q.push("3");
  q.push("4");

  int count = 0;
  while (count < n)
  {
   string current = q.front();
   q.pop();

   // Write current number to the file
   outFile << current << endl;
   count++;

   // Generate the next numbers by appending '3' and '4'
   q.push(current + "3");
   q.push(current + "4");
  }

  outFile.close();
 }

 // Method to retrieve the nth number from the file
 string getNthNumber(int n)
 {
  ifstream inFile("numbers.txt");
  if (!inFile)
  {
   cerr << "Error opening file!" << endl;
   return "";
  }

  string line;
  for (int i = 1; i <= n; ++i)
  {
   getline(inFile, line);
   if (inFile.eof())
    break; // End of file
  }

  inFile.close();
  return line;
 }
};

int main()
{
 int n;
 cout << "Enter the term position (n): ";
 cin >> n;

 if (n < 3 || n > 1000)
 {
  cout << "Please enter a valid value for n (3 ≤ n ≤ 1000)." << endl;
  return 1;
 }

 // Create NumberGenerator object
 NumberGenerator generator;

 // Generate the numbers up to nth term and write them to a file
 generator.generateNumbers(n);

 // Retrieve and display the nth term from the file
 string nthTerm = generator.getNthNumber(n);
 cout << nthTerm << endl;

 return 0;
}
