#include <iostream>

using namespace std;

int main()
{
 int n, element;
 int largest, smallest;

 // Read the number of elements
 cin >> n;

 // Read the first element to initialize largest and smallest
 cin >> element;
 largest = smallest = element;

 // Read remaining elements and update largest and smallest
 for (int i = 1; i < n; i++)
 {
  cin >> element;
  if (element > largest)
  {
   largest = element;
  }
  if (element < smallest)
  {
   smallest = element;
  }
 }

 // Print the results
 cout << "The largest element is: " << largest << endl;
 cout << "The smallest element is: " << smallest << endl;

 return 0;
}