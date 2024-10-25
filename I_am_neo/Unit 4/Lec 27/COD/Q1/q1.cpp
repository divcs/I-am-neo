#include <iostream>
#include <iomanip> // For std::setprecision
using namespace std;

class Vehicle
{
protected:
 double distance; // Distance travelled by the car
 double time;     // Time taken to cover the distance

public:
 // Method to fetch input for distance and time
 void input()
 {
  cin >> distance >> time;
 }
};

class Car : public Vehicle
{
public:
 // Method to calculate and display the speed
 void displaySpeed()
 {
  if (time > 0)
  {                                  // To avoid division by zero
   double speed = distance / time;   // Speed calculation
   cout << fixed << setprecision(2); // Formatting the output
   cout << "Speed of car: " << speed << endl;
  }
  else
  {
   cout << "Time cannot be zero." << endl; // Handling zero time input
  }
 }
};

int main()
{
 Car myCar;            // Create a Car object
 myCar.input();        // Fetch distance and time input
 myCar.displaySpeed(); // Calculate and display the speed
 return 0;
}
