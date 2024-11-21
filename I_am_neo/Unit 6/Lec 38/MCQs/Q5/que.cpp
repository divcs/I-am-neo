#include <iostream>
using namespace std;

void func()
{
 try
 {
  throw 10;
 }
 catch (int x)
 {
  cout << "Caught exception: " << x << endl;
  throw;
 }
}

int main()
{
 try
 {
  func();
 }
 catch (int x)
 {
  cout << "Caught exception in main: " << x << endl;
 }
 return 0;
}