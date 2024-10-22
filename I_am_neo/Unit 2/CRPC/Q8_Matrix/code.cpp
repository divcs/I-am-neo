#include <iostream>
using namespace std;

class Matrix
{
public:
 int mat[5][5]; // Maximum size is 5x5 based on problem constraints

 // Function to compute the sum of a submatrix starting at (top, left) with a given height and width
 int subSum(int top, int left, int size)
 {
  int sum = 0;
  for (int i = top; i < top + size; i++)
  {
   for (int j = left; j < left + size; j++)
   {
    sum += mat[i][j];
   }
  }
  return sum;
 }

 // Function to count the number of sub-squares whose sum is equal to S
 int countSubWithSum(int N, int S)
 {
  int count = 0;

  // Loop over all possible starting points of the top-left corner of sub-squares
  for (int top = 0; top < N; top++)
  {
   for (int left = 0; left < N; left++)
   {
    // Try different sizes of square sub-matrices
    for (int size = 1; size <= N - max(top, left); size++)
    {
     int sum = subSum(top, left, size);
     if (sum == S)
     {
      count++;
     }
    }
   }
  }

  return count;
 }
};

int main()
{
 int N; // Size of the matrix
 cin >> N;

 Matrix matrix;
 Matrix *matrix_ptr = &matrix; // Pointer to Matrix object

 // Input the matrix
 for (int i = 0; i < N; i++)
 {
  for (int j = 0; j < N; j++)
  {
   cin >> matrix_ptr->mat[i][j];
  }
 }

 int S; // Target sum
 cin >> S;

 // Call countSubWithSum using the object pointer and print the result
 int result = matrix_ptr->countSubWithSum(N, S);
 cout << result << endl;

 return 0;
}
