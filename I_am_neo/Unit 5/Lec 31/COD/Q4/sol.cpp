#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int count = 0;
 int sum = 0;
 double average = 0.0;

 // Allocate memory for up to 100 integers as per the constraints
 int *numbers = new int[100];

 cout << "Enter positive integers (enter a negative number to stop): ";

 // Read integers until a negative number is entered
 while (true)
 {
  int num;
  cin >> num;

  if (num < 0)
  {
   break; // Exit loop if a negative number is entered
  }

  // Store the number and update sum and count
  numbers[count] = num;
  sum += num;
  count++;
 }

 // Calculate the average if there are any positive numbers entered
 if (count > 0)
 {
  average = static_cast<double>(sum) / count;
 }

 // Display the results
 cout << "Sum: " << sum << endl;
 cout << fixed << setprecision(2) << "Average: " << average << endl;

 // Free dynamically allocated memory
 delete[] numbers;

 return 0;
}
