#include <iostream>

using namespace std;

class MatrixSum
{
private:
 int rows;
 int cols;
 int matrix[10][10]; // Assuming maximum size 10x10

public:
 void inputMatrix()
 {

  cin >> rows;

  cin >> cols;

  for (int i = 0; i < rows; i++)
  {
   for (int j = 0; j < cols; j++)
   {
    cin >> matrix[i][j];
   }
  }
 }

 void calculateSum()
 {
  for (int i = 0; i < rows; i++)
  {
   int sum = 0;
   for (int j = 0; j < cols; j++)
   {
    cout << matrix[i][j] << " ";
    sum += matrix[i][j];
   }
   cout << "SUM: " << sum << endl;
  }
 }
};

int main()
{
 MatrixSum m;
 m.inputMatrix();
 m.calculateSum();

 return 0;
}

// -- original
// #include <iostream>

// using namespace std;

// class MatrixSum
// {
// private:
//  int rows;
//  int cols;
//  int matrix[10][10]; // Assuming maximum size 10x10

// public:
//  void inputMatrix()
//  {
//   cout << "Enter number of rows: ";
//   cin >> rows;
//   cout << "Enter number of columns: ";
//   cin >> cols;

//   cout << "Enter the elements of the matrix:\n";
//   for (int i = 0; i < rows; i++)
//   {
//    for (int j = 0; j < cols; j++)
//    {
//     cin >> matrix[i][j];
//    }
//   }
//  }

//  void calculateSum()
//  {
//   for (int i = 0; i < rows; i++)
//   {
//    int sum = 0;
//    cout << "Row " << i + 1 << ": ";
//    for (int j = 0; j < cols; j++)
//    {
//     cout << matrix[i][j] << " ";
//     sum += matrix[i][j];
//    }
//    cout << "SUM: " << sum << endl;
//   }
//  }
// };

// int main()
// {
//  MatrixSum m;
//  m.inputMatrix();
//  m.calculateSum();

//  return 0;
// }