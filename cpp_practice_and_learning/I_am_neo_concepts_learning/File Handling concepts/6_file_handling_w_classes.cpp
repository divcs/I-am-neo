#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler
{
 fstream file;

public:
 void open(const string &filename, ios::openmode mode)
 {
  file.open(filename, mode);
  if (!file)
  {
   cout << "File could not be opened.\n";
  }
 }

 void writeData(const string &data)
 {
  if (file.is_open())
  {
   file << data << endl;
  }
 }

 void readData()
 {
  string line;
  if (file.is_open())
  {
   while (getline(file, line))
   {
    cout << line << endl;
   }
  }
 }

 void close()
 {
  if (file.is_open())
  {
   file.close();
  }
 }
};

int main()
{
 FileHandler fh;
 fh.open("example.txt", ios::out | ios::in | ios::trunc);
 fh.writeData("Hello from the FileHandler class!");
 fh.close();

 fh.open("example.txt", ios::in);
 fh.readData();
 fh.close();

 return 0;
}
