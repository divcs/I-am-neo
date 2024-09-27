#include <iostream>

using namespace std;

int main()
{
 int M;
 cin >> M;

 // Read the first matrix
 int matrix1[M][M];
 for (int i = 0; i < M; i++)
 {
  for (int j = 0; j < M; j++)
  {
   cin >> matrix1[i][j];
  }
 }

 // Read the second matrix
 int matrix2[M][M];
 for (int i = 0; i < M; i++)
 {
  for (int j = 0; j < M; j++)
  {
   cin >> matrix2[i][j];
  }
 }

 // Calculate the product matrix
 int product[M][M];
 for (int i = 0; i < M; i++)
 {
  for (int j = 0; j < M; j++)
  {
   product[i][j] = 0;
   for (int k = 0; k < M; k++)
   {
    product[i][j] += matrix1[i][k] * matrix2[k][j];
   }
  }
 }

 // Print the product matrix
 cout << "The product of the two matrices is:" << endl;
 for (int i = 0; i < M; i++)
 {
  for (int j = 0; j < M; j++)
  {
   cout << product[i][j] << "\t";
  }
  cout << endl;
 }

 return 0;
}