#include <iostream>
#include <vector>
using namespace std;

vector<int> reversedArray(const vector<int> &arr, const int n)
{

 vector<int> reversed(n);

 for (int i = 0; i < n; i++)
 {
  reversed[i] = arr[n - i - 1];
 }

 return reversed;
}
int main()
{
 int N;

 cin >> N;
 if (N <= 0)
 {
  cout << "Size should be positive" << endl;
  return 1;
 }
 vector<int> arr(N);

 for (int i = 0; i < N; i++)
 {
  cin >> arr[i];
 }
 cout << "Original Array: " << " ";
 for (int i = 0; i < N; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
 vector<int> reversedArr = reversedArray(arr, N);
 cout << "Reversed Array: " << " ";
 for (int i = 0; i < N; i++)
 {
  cout << reversedArr[i] << " ";
 }

 return 0;
}