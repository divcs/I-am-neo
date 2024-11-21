#include <iostream>
using namespace std;

void func()
{
 try
 {
  throw 5.5;
 }
 catch (int x)
 {
  cout << x << endl;
 }
 catch (double d)
 {
  cout << d << endl;
 }
}

int main()
{
 func();
 return 0;
}