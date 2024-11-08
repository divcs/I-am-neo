#include <iostream>
#include <fstream>
using namespace std;

int main()
{
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
 }

 return 0;
}