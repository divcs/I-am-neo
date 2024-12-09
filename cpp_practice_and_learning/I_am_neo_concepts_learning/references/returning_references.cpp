#include <iostream>
using namespace std;

// int & cuz access of a integer value is required
int &addressRet(int &ref)
{
 return ref;
}

int main()
{
 int x = 10;
 int &ref = addressRet(x);
 ref = 20;
 cout << x << endl;
 return 0;
}