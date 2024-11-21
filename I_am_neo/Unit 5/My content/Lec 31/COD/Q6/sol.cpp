#include <iostream>
using namespace std;

void findPairs(int *arr, int n, int target)
{
 bool foundPair = false;

 for (int i = 0; i < n; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (arr[i] + arr[j] == target)
   {
    cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
    foundPair = true;
   }
  }
 }

 if (!foundPair)
 {
  cout << "No pair" << endl;
 }
}

int main()
{
 int n, target;

 cout << "Enter the size of the array: ";
 cin >> n;

 int *arr = new int[n];

 cout << "Enter " << n << " integers: ";
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 cout << "Enter the target sum: ";
 cin >> target;

 findPairs(arr, n, target);

 delete[] arr;

 return 0;
}