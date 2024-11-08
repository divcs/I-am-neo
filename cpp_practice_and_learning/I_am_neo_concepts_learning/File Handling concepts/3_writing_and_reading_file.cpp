#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ofstream fout("writing_and_reading.txt");
 fout << "Hello" << endl;
 fout << "This is the content of writing_and_reading.txt file." << endl;
 fout.close();

 ifstream inFile("writing_and_reading.txt");
 string line;
 if (inFile.is_open())
 {
  while (getline(inFile, line))
  {
   cout << line << endl;
  }
  inFile.close();
 }
 else
 {
  cout << "Unable to open file for reading." << endl;
 }

 return 0;
}