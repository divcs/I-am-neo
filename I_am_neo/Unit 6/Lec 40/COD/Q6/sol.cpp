#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to convert the input array to its reduced form
vector<int> convert(const vector<int> &v)
{
 int size = v.size();

 // Create a vector of pairs (value, index)
 vector<pair<int, int>> valueIndexPairs;
 for (int i = 0; i < size; ++i)
 {
  valueIndexPairs.emplace_back(v[i], i);
 }

 // Sort the pairs based on the value
 sort(valueIndexPairs.begin(), valueIndexPairs.end());

 // Create a result vector to store the reduced form
 vector<int> res(size);

 // Assign reduced values based on the sorted order
 for (int i = 0; i < size; ++i)
 {
  res[valueIndexPairs[i].second] = i;
 }

 return res;
}

// Function to print the elements of a vector
void printArr(const vector<int> &v)
{
 for (auto &i : v)
 {
  cout << i << " ";
 }
 cout << endl;
}

int main()
{
 int n;
 cin >> n;

 if (n <= 0 || n > 15)
 {
  cout << "-1";
  return 0;
 }

 vector<int> v(n);
 for (int i = 0; i < n; ++i)
 {
  cin >> v[i];
 }

 // Output the input array
 cout << "Input Array: ";
 printArr(v);

 // Convert the array and output the reduced form
 vector<int> res = convert(v);
 cout << "Converted Array: ";
 printArr(res);

 return 0;
}
