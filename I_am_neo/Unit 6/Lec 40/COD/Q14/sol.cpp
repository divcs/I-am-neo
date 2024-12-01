#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main()
{
 int n;
 cin >> n;

 vector<int> numbers(n);
 for (int i = 0; i < n; i++)
 {
  cin >> numbers[i];
 }

 int pos;
 cin >> pos;

 try
 {
  // Check if the position is within valid range
  if (pos < 0 || pos >= n)
  {
   throw out_of_range("Not possible to fetch index " + to_string(pos));
  }

  // If valid, fetch and print the element at the position
  cout << numbers[pos] << "\n";
 }
 catch (const out_of_range &e)
 {
  // Handle invalid index exception
  cout << "Exception occurred! " << e.what() << "\n";
 }

 return 0;
}
