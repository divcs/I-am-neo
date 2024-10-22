#include <iostream>
using namespace std;

class Matrix
{
public:
 int mat[15][15]; // 2D array to store matrix elements
 int rows, cols;  // Dimensions of the matrix

 // Function to input the matrix dimensions and elements
 void input(int m, int n)
 {
  rows = m;
  cols = n;
  for (int i = 0; i < m; i++)
  {
   for (int j = 0; j < n; j++)
   {
    cin >> mat[i][j];
   }
  }
 }

 // Function to print the matrix elements in zigzag (snake) pattern
 void zigzagTraversal()
 {
  for (int i = 0; i < rows; i++)
  {
   if ((i + 1) % 2 == 1)
   { // Odd row number: print left to right
    for (int j = 0; j < cols; j++)
    {
     cout << mat[i][j] << " ";
    }
   }
   else
   { // Even row number: print right to left
    for (int j = cols - 1; j >= 0; j--)
    {
     cout << mat[i][j] << " ";
    }
   }
  }
  cout << endl;
 }
};

int main()
{
 int m, n;
 cin >> m >> n;

 Matrix matrix;                // Create a Matrix object
 Matrix *matrix_ptr = &matrix; // Pointer to the Matrix object

 // Call input() using the object pointer
 (matrix_ptr->*(&Matrix::input))(m, n);

 // Call zigzagTraversal() using the object pointer
 (matrix_ptr->*(&Matrix::zigzagTraversal))();

 return 0;
}
