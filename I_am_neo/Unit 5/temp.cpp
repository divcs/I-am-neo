#include <iostream>
using namespace std;

// Function to find all pairs whose sum equals the target
void findPairs(int *arr, int n, int target)
{
 bool found = false;

 for (int i = 0; i < n; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (arr[i] + arr[j] == target)
   {
    if (!found)
    {
     cout << "Pairs with the sum " << target << " are: ";
     found = true;
    }
    cout << "Pair found: (" << arr[i] << ", " << arr[j] << ") ";
   }
  }
 }

 if (!found)
 {
  cout << "No pair";
 }

 cout << endl;
}

int main()
{
 int n;
 cin >> n; // Input the size of the array

 // Dynamically allocate memory for the array
 int *arr = new int[n];

 // Input the elements of the array
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 int target;
 cin >> target; // Input the target sum

 // Call the function to find and print the pairs
 findPairs(arr, n, target);

 // Free the dynamically allocated memory
 delete[] arr;

 return 0;
}
