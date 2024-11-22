#include <iostream>
using namespace std;
class MyException
{
};
void func(int x)
{
 if (x == 0)
  throw MyException();
}
int main()
{
 try
 {
  for (int i = 5; i >= -5; i--)
  {
   func(i);
   cout << i << " ";
  }
 }
 catch (MyException &e)
 {
  cout << "Caught MyException" << endl;
 }
 return 0;
}
