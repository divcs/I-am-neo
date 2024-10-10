#include <iostream>
using namespace std;

int main()
{
 int rows, cols;
 cout << "Enter the number of rows:";
 cin >> rows;
 for (int i = 0; i < rows; i++)
 {
  for (int j = 0; j < 2 * i - 1; j++)
  {

   cout
       << "*" << endl;
  }
 }

 return 0;
}
