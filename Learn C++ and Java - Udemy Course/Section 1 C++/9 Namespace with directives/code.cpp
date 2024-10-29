#include <iostream>
using namespace std;

// first namespace
namespace first_space
{
 void func()
 {
  cout << "Inside first_space" << endl;
 }
}

// second namespace
namespace second_space
{
 void func()
 {
  cout << "Inside second_space" << endl;
 }
}

using namespace first_space;
int main()
{
 // this func calls func from first namespace
 func();
 // this func calls func from second namespace
 second_space::func();

 return 0;
}