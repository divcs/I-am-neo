#include <iostream>
using namespace std;
int main()
{
 char *buff;
 try
 {
  buff = new char[1024];
  if (buff == 0)
   throw "Memory allocation failure!";
  else
   cout << sizeof(buff) << " Byte successfully allocated!" << endl;
 }
 catch (char *strg)
 {
  cout << "Exception raised: " << strg << endl;
 }
 return 0;
}