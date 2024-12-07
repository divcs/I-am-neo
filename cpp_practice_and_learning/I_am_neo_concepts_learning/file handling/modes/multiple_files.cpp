#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ifstream inFile("input.txt");
 ofstream outFile("output.txt");

 if (!inFile || !outFile)
 {
  cout << "File could not be opened!" << endl;
  return 1;
 }

 string line;
 while (getline(inFile, line))
 {                         // Read from input file
  outFile << line << endl; // Write to output file
 }

 inFile.close();
 outFile.close();
 cout << "Data copied from input.txt to output.txt." << endl;
 return 0;
}
