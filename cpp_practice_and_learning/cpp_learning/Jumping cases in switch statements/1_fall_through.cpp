// 1. By Not Using break statements in the cases: When you omit the break, the code execution will continue into the next case block until it hits another break or the end of the switch statement.

#include <iostream>
using namespace std;

int main()
{
 int value = 2;

 switch (value)
 {
 case 1:
  cout << "Case 1" << endl;
  // No break here, so it will fall through to case 2
 case 2:
  cout << "Case 2" << endl;
  // No break here, so it will fall through to case 3
 case 3:
  cout << "Case 3" << endl;
  break;
 default:
  cout << "Default case" << endl;
 }

 return 0;
}

// Output:
// Case 2
// Case 3

// Notes on Fall - Through Behavior :

// Explicit Fall - Through : Some languages(like Swift) require explicit fall - through using a fallthrough keyword.
// Multiple Conditions : Another approach to handle multiple cases in the same block without fall - through is by combining them. For example:

#include <iostream>
using namespace std;

int main()
{
 int value;
 switch (value)
 {
 case 1:
 case 2:
  cout << "Case 1 or 2" << endl;
  break;
 case 3:
  cout << "Case 3" << endl;
  break;
 }
 return 0;
}

// Here, both case 1 and case 2 will execute the same code block, but without an unintended fall - through.
// Use Case: Fall-through can be useful for cases that share code, but it can lead to bugs if not used carefully.