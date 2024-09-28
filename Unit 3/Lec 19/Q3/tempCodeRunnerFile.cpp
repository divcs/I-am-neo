#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
 int n;
 cout << "Enter the number of integers: ";
 cin >> n;

 if (n < 0 || n > 100)
 {
  cout << "Invalid entry" << endl;
  return 1;
 }

 vector<int> numbers(n);
 cout << "Enter " << n << " integers: ";
 for (int i = 0; i < n; ++i)
 {
  cin >> numbers[i];
 }

 // Write to binary file
 ofstream outFile("numbers.dat", ios::binary);
 for (int num : numbers)
 {
  outFile.write(reinterpret_cast<char *>(&num), sizeof(num));
 }
 outFile.close();

 // Read from binary file
 ifstream inFile("numbers.dat", ios::binary);
 int num;
 while (inFile.read(reinterpret_cast<char *>(&num), sizeof(num)))
 {
  cout << num << " ";
 }
 inFile.close();

 return 0;
}
