#include <iostream>

using namespace std;

class ArraySearch
{
public:
 int seats[10];
 int numSeats;

 // Function to read the available seat numbers
 void readSeats()
 {
  cin >> numSeats;
  for (int i = 0; i < numSeats; i++)
  {
   cin >> seats[i];
  }
 }

 // Function to check if a given seat is available
 bool isSeatAvailable(int seatNumber)
 {
  for (int i = 0; i < numSeats; i++)
  {
   if (seats[i] == seatNumber)
   {
    return true;
   }
  }
  return false;
 }
};

int main()
{
 ArraySearch arraySearch;

 // Read the available seat numbers
 arraySearch.readSeats();

 // Read the seat number to be searched
 int seatNumber;
 cin >> seatNumber;

 // Check if the seat is available
 if (arraySearch.isSeatAvailable(seatNumber))
 {
  cout << "Seat is available" << endl;
 }
 else
 {
  cout << "Seat is not available" << endl;
 }

 return 0;
}