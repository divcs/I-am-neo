#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void writeToFile(const string &fileName)
{
 ofstream outputfile(fileName, ios::app);
 if (outputfile.is_open())
 {
  cout << "Enter the text you want to write in the file (type 'exit' to finish):" << endl;
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
  cerr << "Error: Unable to open file for writing." << endl;
 }
}

void sortDataOfFile(vector<string> &linesVector)
{
 sort(linesVector.begin(), linesVector.end());
}

vector<string> readFromFileInVector(const string &fileName)
{
 ifstream inputfile(fileName);
 if (inputfile.is_open())
 {
  cout << "Reading the contents of the file:" << endl;
  vector<string> lines;
  string line;
  while (getline(inputfile, line))
  {
   lines.push_back(line);
  }
  inputfile.close();
 }
 else
 {
  cerr << "Error: Unable to open file for reading." << endl;
 }
}

int main()
{
 const string fileName = "input.txt";

 // Writing to file
 writeToFile(fileName);

 // Reading from file
 vector<string> FileData = readFromFileInVector(fileName);

 sortDataOfFile(FileData);
 cout << "Sorted Data from the File:" << endl;
 for (const string &line : FileData)
 {
  cout << line << endl;
 }

 return 0;
}
