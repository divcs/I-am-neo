#include <iostream>
#include <cstring>
using namespace std;

int main()
{
 try
 {
  char p[13];
  strcpy(p, "How are you?");
  cout << p << endl;
 }
 catch (exception &er)
 {
 }
 return 0;
}