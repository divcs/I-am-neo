#include <iostream>
#include <string>
using namespace std;

int main()
{
 int n;
 cout << "Enter number of students: ";
 cin >> n;

 string *names = new string[n]; // Dynamic allocation

 for (int i = 0; i < n; i++)
 {
  cout << "Enter name of student " << (i + 1) << ": ";
  cin >> names[i];
 }

 cout << "\nStudent Names:" << endl;
 for (int i = 0; i < n; i++)
 {
  cout << names[i] << endl;
 }

 delete[] names; // Free memory
 return 0;
}
