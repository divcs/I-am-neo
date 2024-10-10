#include <iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter the number of rows: ";
 cin >> n;

 for (int i = 1; i <= n; i++)
 {
  // Printing leading spaces
  for (int j = 1; j <= n - i; j++)
  {
   cout << " ";
  }
  // Print increasing numbers
  int num = i;
  // cout << num << endl;

  for (int j = 1; j <= i; j++)
  {
   cout << num << " ";
   num++;
  }

  // Print decreasing numbers
  num -= 2;
  for (int j = 1; j < i; j++)
  {
   cout << num << " ";
   num--;
  }
  // move control to next line after each row
  cout << endl;
 }

 return 0;
}