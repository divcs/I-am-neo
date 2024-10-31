// only one test case of compilation passes and 2 of hidden
#include <iostream>
#include <vector>
#include <algorithm> // Include for max_element and reverse

using namespace std;

class LongestIncreasingSubsequence
{
public:
 LongestIncreasingSubsequence(const vector<int> &arr) : arr_(arr) {}

 ~LongestIncreasingSubsequence() {}

 void findAndPrintLIS()
 {
  int n = arr_.size();
  vector<int> lis(n, 1); // LIS[i] stores the length of LIS ending at index i

  for (int i = 1; i < n; ++i)
  {
   for (int j = 0; j < i; ++j)
   {
    if (arr_[i] > arr_[j] && lis[i] < lis[j] + 1)
    {
     lis[i] = lis[j] + 1;
    }
   }
  }

  // Find the maximum length of LIS
  int maxLength = *max_element(lis.begin(), lis.end());

  // Print the length of LIS
  cout << maxLength << endl;

  // Print the elements of LIS
  vector<int> lisElements;
  for (int i = n - 1; i >= 0; --i)
  {
   if (lis[i] == maxLength)
   {
    lisElements.push_back(arr_[i]);
    maxLength--;
   }
  }

  reverse(lisElements.begin(), lisElements.end());
  for (int num : lisElements)
  {
   cout << num << " ";
  }
  cout << endl;
 }

private:
 vector<int> arr_;
};

int main()
{
 int t;
 cin >> t;

 while (t--)
 {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
   cin >> arr[i];
  }

  LongestIncreasingSubsequence lis(arr);
  lis.findAndPrintLIS();
 }

 return 0;
}