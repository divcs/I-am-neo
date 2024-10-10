#include <iostream>
using namespace std;

int main()
{

 int nums[5];

 cout << "Enter the five numbers:" << endl;
 for (int i = 0; i < 5; i++)
 {
  cin >> nums[i];
 }
 int oddSum = 0;
 int evenSum = 0;
 for (int i = 0; i < 5; i++)
 {

  if (nums[i] % 2 == 0)
  {
   evenSum = nums[i] + evenSum;
  }
  else
  {
   oddSum = nums[i] + oddSum;
  }
 }
 cout << "The sum of even numbers:" << evenSum << endl;
 cout << "The sum of odd numbers:" << oddSum << endl;

 return 0;
}