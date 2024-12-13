#include <iostream>
using namespace std;
void modify(int *num)
{
 *num += 10;
}

int main()
{
 int x = 5;
 modify(&x);
 cout << "Modified value: " << x << endl;
 return 0;
}
