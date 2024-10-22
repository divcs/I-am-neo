#include <iostream>
using namespace std;

class HumidityProcessor
{
public:
 // Function to find the longest period where humidity is below the threshold
 int longestHumidity(int *humidity, int size, int max_humidity)
 {
  int longest_stretch = 0, current_stretch = 0;

  for (int i = 0; i < size; i++)
  {
   if (*(humidity + i) < max_humidity)
   { // Check if humidity is below the threshold
    current_stretch++;
    if (current_stretch > longest_stretch)
    {
     longest_stretch = current_stretch;
    }
   }
   else
   {
    current_stretch = 0; // Reset the current stretch if humidity is above or equal to the threshold
   }
  }

  return longest_stretch; // Return the longest stretch of consecutive days
 }

 // Function to process each test case
 void processTestCase(int N, int P)
 {
  int humidity_levels[N];

  // Input the humidity levels for N days
  for (int i = 0; i < N; i++)
  {
   cin >> humidity_levels[i];
  }

  // Call longestHumidity to find the longest period and print the result
  cout << longestHumidity(humidity_levels, N, P) << endl;
 }
};

int main()
{
 int T; // Number of test cases
 cin >> T;

 HumidityProcessor hp; // Create an instance of the class

 while (T--)
 {
  int N, P; // N = number of days, P = maximum humidity threshold
  cin >> N >> P;

  // Use a pointer to call the processTestCase method
  HumidityProcessor *hp_ptr = &hp;
  hp_ptr->processTestCase(N, P);
 }

 return 0;
}
