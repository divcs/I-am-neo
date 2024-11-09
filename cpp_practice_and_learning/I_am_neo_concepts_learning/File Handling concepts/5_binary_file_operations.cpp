#include <iostream>
#include <fstream>
using namespace std;

struct Data
{
 int id;
 char name[20];
};

int main()
{
 // Write to binary file
 ofstream outFile("data.bin", ios::binary);
 Data d1 = {1, "Alice"};
 outFile.write((char *)&d1, sizeof(d1));
 outFile.close();

 // Read from binary file
 ifstream inFile("data.bin", ios::binary);
 Data d2;
 inFile.read((char *)&d2, sizeof(d2));
 cout << "ID: " << d2.id << ", Name: " << d2.name << endl;
 inFile.close();

 return 0;
}
