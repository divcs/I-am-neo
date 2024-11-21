#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;

 if (n <= 0)
 {
  cout << "Number of Fibonacci numbers should be positive!" << endl;
  return 0;
 }

 int *fib = new int[n];

 if (n >= 1)
  fib[0] = 0;
 if (n >= 2)
  fib[1] = 1;

 cout << "Fibonacci Sequence: ";
 if (n >= 1)
  cout << fib[0] << " ";
 if (n >= 2)
  cout << fib[1] << " ";

 for (int i = 2; i < n; i++)
 {
  fib[i] = fib[i - 1] + fib[i - 2];
  cout << fib[i] << " ";
 }

 delete[] fib;
 return 0;
}
