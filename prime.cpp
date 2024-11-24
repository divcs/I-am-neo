#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int number)
{
 if (number <= 1)
  return false; // 0 and 1 are neither prime nor composite
 for (int i = 2; i * i <= number; ++i)
 {
  if (number % i == 0)
   return false; // Not a prime (composite)
 }
 return true; // Prime
}

vector<int> findCompositeInVector(const vector<int> &vec)
{
 vector<int> composites;
 for (int num : vec)
 {
  if (num > 1 && !isPrime(num))
  { // Only numbers > 1 can be composite
   composites.push_back(num);
  }
 }
 return composites;
}

int main()
{
 int n;
 cin >> n;
 if (n < 1 || n > 15)
 {
  cout << "-1";
  return 0;
 }

 vector<int> numbers(n);
 for (int i = 0; i < n; ++i)
 {
  cin >> numbers[i];
 }

 vector<int> compositeNumbers = findCompositeInVector(numbers);

 cout << "Composite numbers: ";
 for (int composite : compositeNumbers)
 {
  cout << composite << " ";
 }
 cout << endl;

 return 0;
}
