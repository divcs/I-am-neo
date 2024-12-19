#include <iostream>
using namespace std;

inline int cube(int x)
{
 return x * x * x;
}

int main()
{
 int n;
 cin >> n;
 cout << "Cube of " << n << "  is: " << cube(n) << endl;

 return 0;
}