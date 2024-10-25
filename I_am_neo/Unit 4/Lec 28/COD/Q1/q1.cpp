#include <iostream>
#include <vector>
using namespace std;

class Parent
{
protected:
 int num; // Attribute to hold the integer
public:
 Parent(int n) : num(n) {} // Constructor to initialize num
};

class Child : public Parent
{
public:
 Child(int n) : Parent(n) {} // Constructor to initialize Parent

 void fun()
 {
  // Convert num to a vector of its digits
  vector<int> digits;
  int temp = num;

  // Extract digits from num
  while (temp > 0)
  {
   digits.push_back(temp % 10);
   temp /= 10;
  }

  int sum = 0; // To hold the sum of pairwise sums
  int size = digits.size();

  // If there's only one digit, print it
  if (size == 1)
  {
   cout << digits[0] << endl;
   return;
  }

  // Calculate the pairwise sums of the digits
  for (int i = 0; i < size; i++)
  {
   for (int j = i + 1; j < size; j++)
   {
    sum += (digits[i] + digits[j]);
   }
  }

  // Print the final sum
  cout << sum << endl;
 }
};

int main()
{
 int num;
 cin >> num; // Read the input number

 Child child(num); // Create a Child object
 child.fun();      // Call the fun() method to process the number

 return 0;
}
