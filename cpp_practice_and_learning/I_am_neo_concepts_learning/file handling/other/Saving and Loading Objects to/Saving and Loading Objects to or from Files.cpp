#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

class Student
{
 int id;
 char name[50];

public:
 Student() {}
 Student(int i, const char *n) : id(i)
 {
  strcpy(name, n, sizeof(name) - 1);
  name[sizeof(name) - 1] = '\0';
 }

 void display() const
 {
  cout << "ID: " << id << ", Name: " << name << endl;
 }

 void save(ofstream &outFile) const
 {
  outFile.write(reinterpret_cast<const char *>(this), sizeof(*this));
 }

 void load(ifstream &inFile)
 {
  inFile.read(reinterpret_cast<char *>(this), sizeof(*this));
 }
};

int main()
{
 Student s1(1, "Alice"), s2(2, "Bob");

 // Save objects to a binary file
 ofstream outFile("students.dat", ios::binary);
 s1.save(outFile);
 s2.save(outFile);
 outFile.close();

 // Read objects from a binary file
 ifstream inFile("students.dat", ios::binary);
 Student s3, s4;
 s3.load(inFile);
 s4.load(inFile);
 inFile.close();

 // Display loaded objects
 s3.display();
 s4.display();

 return 0;
}
