#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 fstream file("data.bin", ios::binary | ios::out | ios::in | ios::trunc);

 // Writing data to file
 for (int i = 1; i <= 5; i++)
 {
  file.write(reinterpret_cast<char *>(&i), sizeof(i));
 }

 // Move to the 3rd integer (2nd index) in the file
 file.seekg(2 * sizeof(int), ios::beg);

 // Read the integer
 int value;
 file.read(reinterpret_cast<char *>(&value), sizeof(value));
 cout << "Value at index 2: " << value << endl;

 // Modify the integer and write it back
 value *= 10;
 file.seekp(2 * sizeof(int), ios::beg);
 file.write(reinterpret_cast<char *>(&value), sizeof(value));

 // Reading all data to verify
 file.seekg(0, ios::beg);
 while (file.read(reinterpret_cast<char *>(&value), sizeof(value)))
 {
  cout << value << " ";
 }

 file.close();
 return 0;
}
