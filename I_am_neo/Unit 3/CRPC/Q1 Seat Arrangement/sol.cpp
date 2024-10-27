#include <iostream>
using namespace std;

class SeatArrangement
{
 long r; // Number of seats
 long n; // Number of people

public:
 // Parameterized Constructor
 SeatArrangement(long seats, long people) : r(seats), n(people) {}

 // Destructor
 ~SeatArrangement()
 {
  cout << "SeatArrangement object is being destroyed" << endl;
 }

 // Method to calculate permutations (P(r, n) = r! / (r - n)!)
 long calculatePermutations()
 {
  long permutation = 1;
  for (long i = r; i > (r - n); --i)
  {
   permutation *= i;
  }
  return permutation;
 }
};

int main()
{
 long seats, people;
 cout << "Enter number of seats and people: ";
 cin >> seats >> people;

 // Create SeatArrangement object
 SeatArrangement arrangement(seats, people);

 // Calculate and display number of seating arrangements
 cout << "Number of ways people can be seated: " << arrangement.calculatePermutations() << endl;

 // Destructor will automatically be called when the object goes out of scope
 return 0;
}
