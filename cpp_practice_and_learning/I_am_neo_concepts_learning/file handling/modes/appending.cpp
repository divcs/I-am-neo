#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ofstream outFile("example.txt", ios::app); // Open a file in append mode
 if (!outFile)
 {
  cout << "File could not be opened!" << endl;
  return 1;
 }

 outFile << "Adding a new line to the file." << endl;

 outFile.close(); // Close the file
 cout << "Data appended successfully." << endl;
 return 0;
}
