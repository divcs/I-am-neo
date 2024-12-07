#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{

 ofstream outputfile("input.txt", ios::app);
 if (outputfile.is_open())
 {
  cout << "Enter the text you want to write in file:";
  string userInput;

  while (true)
  {
   getline(cin, userInput);
   if (userInput == "exit")
    break;
   outputfile << userInput << endl;
  }
  outputfile.close();
 }
 else
 {
  cout << "Error in writing to file" << endl;
  return 1;
 }

 ifstream inputfile("input.txt");
 if (inputfile.is_open())
 {
  cout << "Reading the contents of file: " << endl;
  string line;
  while (getline(inputfile, line))
  {
   cout << line << endl;
  }
  inputfile.close();
 }
 else
 {
  cout << "Error in reading input file" << endl;
 }
 return 0;
}