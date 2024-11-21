#include <iostream>
#include <exception>
using namespace std;

void myunexpected()
{
 cout << "unexpected handler called\n";
 throw;
}
void myfunction() throw(int, bad_exception)
{
 throw 'x';
}

int main()
{
 set_unexpected(myunexpected);
 try
 {
  myfunction();
 }
 catch (int)
 {
  cout << "Caught int\n";
 }
 catch (bad_exception be)
 {
  cout << "Caught bad_exception\n";
 }
 catch (...)
 {
  cout << "Caught other exception \n";
 }
 return 0;
}