#include <iostream>

using namespace std;

int main()
{
 int T;
 cin >> T;

 for (int t = 0; t < T; t++)
 {
  int R, C;
  cin >> R >> C;

  int grid[R][C];
  for (int i = 0; i < R; i++)
  {
   for (int j = 0; j < C; j++)
   {
    cin >> grid[i][j];
   }
  }

  // Calculate the product for each row
  for (int i = 0; i < R; i++)
  {
   int product = 1;
   for (int j = 0; j < C; j++)
   {
    product *= grid[i][j];
   }
   // Update the grid with the product for each element in the row
   for (int j = 0; j < C; j++)
   {
    grid[i][j] = product;
   }
  }

  // Print the updated grid
  for (int i = 0; i < R; i++)
  {
   for (int j = 0; j < C; j++)
   {
    cout << grid[i][j] << " ";
   }
   cout << endl;
  }
 }

 return 0;
}