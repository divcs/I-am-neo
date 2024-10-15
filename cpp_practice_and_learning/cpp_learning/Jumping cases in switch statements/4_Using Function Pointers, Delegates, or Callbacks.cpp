// In languages that support function pointers(C / C++) or delegates(C #), you can map cases to specific functions and call them dynamically.

#include <iostream>
#include <functional>
#include <unordered_map>

using namespace std;

int main()
{
 int value = 1;

 // Define actions using std::function for flexibility
 unordered_map<int, function<void()>> cases;

 // Define case 1 action
 cases[1] = [&]()
 {
  cout << "Case 1" << endl;
  value = 3; // Change value to jump to another case
 };

 // Define case 2 action
 cases[2] = [&]()
 {
  cout << "Case 2" << endl;
 };

 // Define case 3 action
 cases[3] = [&]()
 {
  cout << "Case 3" << endl;
 };

 while (true)
 {
  if (cases.find(value) != cases.end())
  {
   cases[value](); // Execute the case action based on the current value
   if (value == 3)
    break; // Exit after case 3
  }
  else
  {
   cout << "Default case" << endl;
   break; // Exit on default case
  }
 }

 return 0;
}

// This approach is more flexible and avoids using goto keeping your code maintainable. It allows you to handle case transitions dynamically and intuitively.