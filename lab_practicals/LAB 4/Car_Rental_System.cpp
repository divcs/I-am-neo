#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
 string licensePlate; // License plate number
 string brand;        // Brand of the car
 string model;        // Model of the car

public:
 // Parameterized constructor
 Car(const string &plate, const string &carBrand, const string &carModel)
     : licensePlate(plate), brand(carBrand), model(carModel)
 {
  cout << "Car created: " << licensePlate << ", Brand: " << brand << ", Model: " << model << endl;
 }

 // Destructor
 ~Car()
 {
  cout << "Car destroyed: " << licensePlate << endl;
 }

 // Getter for license plate
 string getLicensePlate() const
 {
  return licensePlate;
 }
};

// Function to create and destroy car objects dynamically
void simulateCarRental()
{
 cout << "Simulating car rental..." << endl;

 // Dynamically create car objects
 Car *car1 = new Car("ABC123", "Toyota", "Camry");
 Car *car2 = new Car("XYZ789", "Honda", "Accord");

 // Perform operations with the cars (if necessary)
 // ...

 // Clean up: destroy the car objects
 delete car1;
 delete car2;
}

int main()
{
 simulateCarRental(); // Call the function to see the behavior
 return 0;
}