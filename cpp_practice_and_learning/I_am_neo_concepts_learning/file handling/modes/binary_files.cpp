#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
 char name[50];
 int age;
 float marks;
};

int main()
{
 Student s1 = {"Alice", 20, 85.5};

 // Writing to a binary file
 ofstream outFile("student.dat", ios::binary);
 if (!outFile)
 {
  cout << "File could not be opened!" << endl;
  return 1;
 }

 outFile.write(reinterpret_cast<char *>(&s1), sizeof(s1));
 outFile.close();

 // Reading from a binary file
 ifstream inFile("student.dat", ios::binary);
 if (!inFile)
 {
  cout << "File could not be opened!" << endl;
  return 1;
 }

 Student s2;
 inFile.read(reinterpret_cast<char *>(&s2), sizeof(s2));
 inFile.close();

 cout << "Name: " << s2.name << "\nAge: " << s2.age << "\nMarks: " << s2.marks << endl;
 return 0;
}
