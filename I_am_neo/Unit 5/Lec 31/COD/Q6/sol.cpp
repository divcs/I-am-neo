#include <iostream>
using namespace std;

int main()
{
 int size;
 cout << "Enter the size of the array: ";
 cin >> size;

 int *arr = new int[size];
 cout << "Enter the elements of the array: ";
 for (int i = 0; i < size; i++)
 {
  cin >> arr[i];
 }

 int target;
 cout << "Enter the target number: ";
 cin >> target;

 bool found = false;

 for (int i = 0; i < size; i++)
 {
  int opp = target - arr[i];
  for (int j = i + 1; j < size; j++)
  {
   if (arr[j] == opp)
   {
    if (!found)
    {
     cout << "Pairs with the sum " << target << " are: ";
     found = true;
    }
    cout << "Pair found: (" << arr[j] << ", " << arr[i] << ") " << endl;
   }
  }
 }

 if (!found)
 {
  cout << "No pair";
 }

 cout << endl;

 delete[] arr;
 return 0;
}
