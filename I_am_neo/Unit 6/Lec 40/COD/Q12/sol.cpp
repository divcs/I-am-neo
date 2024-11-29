// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

int main()
{
 int n;
 cin >> n;
 vector<vector<int>> integer(2, vector<int>(n));

 for (int i = 0; i < 2; i++)
 {
  for (int j = 0; j < n; j++)
  {
   cin >> integer[i][j];
  }
 }
 int sum = 0;

 for (int j = 0; j < n; j++)
 {

  sum += integer[0][j] * integer[1][j];
 }

 vector<vector<double>> floats(2, vector<double>(n));
 for (int i = 0; i < 2; i++)
 {
  for (int j = 0; j < n; j++)
  {
   cin >> floats[i][j];
  }
 }
 double sum1 = 0;

 for (int j = 0; j < n; j++)
 {

  sum1 += floats[0][j] * floats[1][j];
 }

 cout << "dot product of integer vectors: " << sum << endl;
 cout << "dot product of double value vectors: " << sum1 << endl;
}