#include <iostream>
#include <iomanip> // For setw
using namespace std;

void printPyramid(int n)
{
 for (int i = 1; i <= n; ++i)
 {
  // Print leading spaces for centering
  cout << setw((n - i + 1) * 2);

  // Print ascending numbers
  for (int j = 1; j <= i; ++j)
  {
   cout << j << " ";
  }

  // Print descending numbers
  for (int j = i - 1; j >= 1; --j)
  {
   cout << j << " ";
  }

  // Move to the next line
  cout << endl;
 }
}

int main()
{
 int rows;
 cout << "Enter the number of rows: ";
 cin >> rows;

 printPyramid(rows);
 return 0;
}