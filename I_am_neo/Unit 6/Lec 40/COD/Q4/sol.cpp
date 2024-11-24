#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
 int n;
 cin >> n;

 if (n > 15)
 {
  cout << "-1";
  return 0;
 }

 vector<int> numbers(n);
 for (int i = 0; i < n; ++i)
 {
  cin >> numbers[i];
 }

 unordered_set<int> unique_numbers; // To store unique numbers
 for (int num : numbers)
 {
  unique_numbers.insert(num);
 }

 int sum = 0;
 for (int num : unique_numbers)
 {
  sum += num;
 }

 cout << "Sum of unique elements: " << sum;
 return 0;
}
