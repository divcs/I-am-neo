#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ofstream outFile("sample.txt", ios::app); // Open file in append mode
 if (outFile.is_open())
 {
  outFile << "Adding another line.\n";
  outFile.close();
 }
 else
 {
  cout << "Unable to open file for appending." << endl;
  return 1;
 }

 cout << "File contents after appending:" << endl;

 ifstream inFile("sample.txt");
 if (inFile.is_open())
 {
  string line;
  while (getline(inFile, line))
  {
   cout << line << endl;
  }
  inFile.close();
 }
 else
 {
  cout << "Unable to open file." << endl;
  return 1;
 }
 return 0;
}

// The ios::app mode opens the file for appending. Data will be added to the end without erasing existing content.