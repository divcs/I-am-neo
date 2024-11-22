#include <iostream>
#include <exception>

using namespace std;

int main()
{

 try
 {
  int num, deno;
  cin >> num >> deno;
  if (deno == 0)
  {
   throw(deno);
  }
  else
  {
   cout << num / deno << endl;
  }
 }
 catch (int zero)
 {
  cout << "Divide by Zero Exception" << endl;
 }
 return 0;
}