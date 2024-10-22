#include <iostream>
using namespace std;

class Seating
{
public:
 int seats[100]; // Array to store seating arrangement

 // Function to compute the maximum number of new passengers
 int maxNewPassengers(int size)
 {
  int max_passengers = 0;

  for (int i = 0; i < size; i++)
  {
   if (*(seats + i) == 0)
   { // Check if the seat is available (0)
    bool canSeat = true;

    // Check the previous seat
    if (i > 0 && *(seats + i - 1) == 1)
    {
     canSeat = false;
    }

    // Check the next seat
    if (i < size - 1 && *(seats + i + 1) == 1)
    {
     canSeat = false;
    }

    if (canSeat)
    {
     *(seats + i) = 1; // Place a new passenger
     max_passengers++;
    }
   }
  }

  return max_passengers;
 }
};

int main()
{
 int T; // Number of test cases
 cin >> T;

 while (T--)
 {
  int N; // Number of seats
  cin >> N;

  Seating s; // Create a Seating object
  for (int i = 0; i < N; i++)
  {
   cin >> s.seats[i]; // Input seating arrangement
  }

  // Create a pointer to the Seating object and call the member function
  Seating *s_ptr = &s;
  cout << s_ptr->maxNewPassengers(N) << endl;
 }

 return 0;
}
