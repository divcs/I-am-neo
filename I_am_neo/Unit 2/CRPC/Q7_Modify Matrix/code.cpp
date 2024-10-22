#include <iostream>
#include <vector>
using namespace std;

// Function to modify the matrix based on zeroes
void modifyMatrix(void *mat, int r, int c)
{
 int *matrix = (int *)mat; // Typecasting the void* pointer to int*
 vector<bool> row_zero(r, false), col_zero(c, false);

 // Identify which rows and columns contain zeroes
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   if (*(matrix + i * c + j) == 0)
   {
    row_zero[i] = true;
    col_zero[j] = true;
   }
  }
 }

 // Set rows to zero
 for (int i = 0; i < r; i++)
 {
  if (row_zero[i])
  {
   for (int j = 0; j < c; j++)
   {
    *(matrix + i * c + j) = 0;
   }
  }
 }

 // Set columns to zero
 for (int j = 0; j < c; j++)
 {
  if (col_zero[j])
  {
   for (int i = 0; i < r; i++)
   {
    *(matrix + i * c + j) = 0;
   }
  }
 }
}

// Function to print the matrix
void printMatrix(void *mat, int r, int c)
{
 int *matrix = (int *)mat; // Typecasting the void* pointer to int*
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   cout << *(matrix + i * c + j) << " ";
  }
  cout << endl;
 }
}

int main()
{
 int r, c;
 cin >> r >> c; // Input the number of rows and columns

 int matrix[r][c];

 // Input the matrix elements
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   cin >> matrix[i][j];
  }
 }

 // Modify the matrix based on zeroes
 modifyMatrix((void *)matrix, r, c);

 // Print the modified matrix
 printMatrix((void *)matrix, r, c);

 return 0;
}
