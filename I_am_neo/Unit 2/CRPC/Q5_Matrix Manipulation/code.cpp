#include <iostream>
using namespace std;

class MatrixManipulator
{
public:
 // Function to input the matrix
 void inputMatrix(int *matrix, int N)
 {
  for (int i = 0; i < N; i++)
  {
   for (int j = 0; j < N; j++)
   {
    cin >> *(matrix + i * N + j); // Using pointer to input elements
   }
  }
 }

 // Function to transpose the matrix
 void transposeMatrix(int *matrix, int *transpose, int N)
 {
  for (int i = 0; i < N; i++)
  {
   for (int j = 0; j < N; j++)
   {
    *(transpose + j * N + i) = *(matrix + i * N + j); // Transpose logic using pointers
   }
  }
 }

 // Function to print the matrix
 void printMatrix(int *matrix, int N)
 {
  for (int i = 0; i < N; i++)
  {
   for (int j = 0; j < N; j++)
   {
    cout << *(matrix + i * N + j) << " "; // Print matrix using pointers
   }
   cout << endl;
  }
 }

 // Function to check if the matrix is symmetric
 bool isSymmetric(int *matrix, int *transpose, int N)
 {
  for (int i = 0; i < N; i++)
  {
   for (int j = 0; j < N; j++)
   {
    if (*(matrix + i * N + j) != *(transpose + i * N + j))
    {
     return false; // If any element differs, it's not symmetric
    }
   }
  }
  return true; // All elements are the same, it's symmetric
 }
};

int main()
{
 int N;
 cin >> N; // Input matrix size

 int matrix[N][N], transpose[N][N];

 MatrixManipulator manipulator;

 // Input the matrix
 manipulator.inputMatrix((int *)matrix, N);

 // Transpose the matrix
 manipulator.transposeMatrix((int *)matrix, (int *)transpose, N);

 // Print original matrix
 cout << "Original matrix:" << endl;
 manipulator.printMatrix((int *)matrix, N);

 // Print transpose matrix
 cout << "Transpose matrix:" << endl;
 manipulator.printMatrix((int *)transpose, N);

 // Check if the matrix is symmetric
 if (manipulator.isSymmetric((int *)matrix, (int *)transpose, N))
 {
  cout << "Matrix is Symmetric!" << endl;
 }
 else
 {
  cout << "Matrix is not Symmetric!" << endl;
 }

 return 0;
}
