#include <iostream>
using namespace std;

class NumberManipulator
{
 long long number;

public:
 // Parameterized Constructor with Initializer List
 NumberManipulator(long long n) : number(n) {}

 // Destructor
 ~NumberManipulator()
 {
  cout << "NumberManipulator object is being destroyed" << endl;
 }

 // Member Function to replace '0's with '1's
 long long replaceZeros(long long n)
 {
  if (n == 0)
   return 0;

  // Recursive call for the rest of the digits
  long long lastDigit = n % 10;
  if (lastDigit == 0)
  {
   lastDigit = 1;
  }
  return replaceZeros(n / 10) * 10 + lastDigit;
 }

 // Wrapper function to start replacement
 void displayReplacedNumber()
 {
  long long result = (number == 0) ? 1 : replaceZeros(number);
  cout << "Number after replacement: " << result << endl;
 }
};

int main()
{
 long long n;
 cout << "Enter a number: ";
 cin >> n;

 // Create NumberManipulator object
 NumberManipulator manipulator(n);

 // Display the replaced number
 manipulator.displayReplacedNumber();

 // The destructor will be called automatically when the object goes out of scope
 return 0;
}
