#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Employee
{
 int id;
 char name[50];
 double salary;
};

int main()
{
 Employee e1 = {1, "John Doe", 50000.0}, e2 = {2, "Jane Smith", 60000.0};

 // Writing structured data to a binary file
 ofstream outFile("employees.dat", ios::binary);
 outFile.write(reinterpret_cast<char *>(&e1), sizeof(e1));
 outFile.write(reinterpret_cast<char *>(&e2), sizeof(e2));
 outFile.close();

 // Reading structured data from a binary file
 ifstream inFile("employees.dat", ios::binary);
 Employee e3, e4;
 inFile.read(reinterpret_cast<char *>(&e3), sizeof(e3));
 inFile.read(reinterpret_cast<char *>(&e4), sizeof(e4));
 inFile.close();

 // Display data
 cout << "Employee 1: ID = " << e3.id << ", Name = " << e3.name << ", Salary = " << e3.salary << endl;
 cout << "Employee 2: ID = " << e4.id << ", Name = " << e4.name << ", Salary = " << e4.salary << endl;

 return 0;
}
