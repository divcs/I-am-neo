#include <iostream>
#include <fstream>
#include <string> // Ensure this is included for std::string and getline
using namespace std;

int main()
{
 // Writing to the file
 ofstream fout("sample.txt");
 if (fout.is_open())
 {
  cout << "File created successfully" << endl;
  fout << "Hello World" << endl;
  fout << "This is a sample file" << endl;
  fout.close();
 }
 else
 {
  cout << "Error in opening sample file" << endl;
  return 1; // Exit if file couldn't be opened for writing
 }

 // Reading from the file and displaying its contents
 ifstream fin("sample.txt");
 if (fin.is_open())
 {
  string line; // Define the line variable
  cout << "Contents of 'sample.txt':" << endl;
  while (getline(fin, line))
  {                      // Read each line into 'line'
   cout << line << endl; // Display the line
  }
  fin.close();
 }
 else
 {
  cout << "Error in opening sample file for reading" << endl;
 }

 return 0;
}
