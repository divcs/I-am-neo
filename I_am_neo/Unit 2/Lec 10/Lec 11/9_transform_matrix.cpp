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

  int matrix[R][C];
  for (int i = 0; i < R; i++)
  {
   for (int j = 0; j < C; j++)
   {
    cin >> matrix[i][j];
   }
  }

  // Calculate the sum for each row
  for (int i = 0; i < R; i++)
  {
   int sum = 0;
   for (int j = 0; j < C; j++)
   {
    sum += matrix[i][j];
   }

   // Update the row elements with the sum
   for (int j = 0; j < C; j++)
   {
    matrix[i][j] = sum;
   }
  }

  // Print the transformed matrix
  for (int i = 0; i < R; i++)
  {
   for (int j = 0; j < C; j++)
   {
    cout << matrix[i][j] << " ";
   }
   cout << endl;
  }
 }

 return 0;
}