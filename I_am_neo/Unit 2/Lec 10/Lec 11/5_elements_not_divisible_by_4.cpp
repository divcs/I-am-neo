#include <iostream>
#include <vector>
#include <iomanip> // for std::setprecision

using namespace std;

int main()
{
 int N;
 // Reading the size of the array
 cin >> N;

 vector<int> elements(N);
 vector<int> notDivisibleBy4;

 // Reading the elements of the array
 for (int i = 0; i < N; i++)
 {
  cin >> elements[i];
  if (elements[i] % 4 != 0)
  {
   notDivisibleBy4.push_back(elements[i]);
  }
 }

 // Check if there are any elements not divisible by 4
 if (notDivisibleBy4.empty())
 {
  cout << "All elements are divisible by 4" << endl;
 }
 else
 {
  // Printing elements not divisible by 4
  cout << "Elements not divisible by 4: ";
  int sum = 0;
  for (int i = 0; i < notDivisibleBy4.size(); i++)
  {
   cout << notDivisibleBy4[i] << " ";
   sum += notDivisibleBy4[i];
  }
  cout << endl;

  // Calculating and printing the sum, average, and count
  int count = notDivisibleBy4.size();
  double average = static_cast<double>(sum) / count;

  cout << "Sum: " << sum << endl;
  cout << "Average: " << fixed << setprecision(2) << average << endl;
  cout << "Count: " << count << endl;
 }

 return 0;
}
