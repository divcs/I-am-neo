// You can also simulate jumping between cases by re - entering the switch statement in a loop or recursive function.This allows you to control the flow between cases more explicitly, based on logic.

#include <iostream>
using namespace std;

int main()
{
 int value = 1;

 while (true)
 {
  switch (value)
  {
  case 1:
   cout << "Case 1" << endl;
   value = 3; // Change to the case you want to jump to
   break;
  case 2:
   cout << "Case 2" << endl;
   break;
  case 3:
   cout << "Case 3" << endl;
   return 0; // Exit the loop and method
  default:
   cout << "Default case" << endl;
   return 0; // Exit the loop and method
  }
 }

 return 0;
}