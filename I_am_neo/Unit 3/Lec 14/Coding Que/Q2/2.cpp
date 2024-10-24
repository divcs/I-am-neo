/*
Create a Vehicle class that uses a parameterized constructor to initialize the registration number, make, model, and year of manufacture. Implement a method called displayDetails to print these attributes. Ensure that the class can handle string inputs for the vehicle details.

Input format :
The input consists of four lines, each containing:

A string representing the registration number.
A string representing the make of the vehicle.
A string representing the model of the vehicle.
An integer representing the year of manufacture.
Output format :
The output prints the following, each containing the details of a vehicle in the following format:

Registration Number: [registration number]

Make: [make]

Model: [model]

Year of Manufacture: [year of manufacture]



Refer to the sample output for the exact format.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1900 ≤ year of manufacture ≤ 2100

Sample test cases :
Input 1 :
KA-01-HH-1234
Toyota
Corolla
2022
Output 1 :
Registration Number: KA-01-HH-1234
Make: Toyota
Model: Corolla
Year of Manufacture: 2022
*/

#include <iostream>
#include <string>

class Vehicle
{
private:
 std::string registrationNumber;
 std::string make;
 std::string model;
 int yearOfManufacture;

public:
 // Parameterized constructor
 Vehicle(std::string regNo, std::string vehicleMake, std::string vehicleModel, int year)
 {
  registrationNumber = regNo;
  make = vehicleMake;
  model = vehicleModel;
  yearOfManufacture = year;
 }

 void displayDetails()
 {
  std::cout << "Registration Number: " << registrationNumber << std::endl;
  std::cout << "Make: " << make << std::endl;
  std::cout << "Model: " << model << std::endl;
  std::cout << "Year of Manufacture: " << yearOfManufacture << std::endl;
 }
};

int main()
{
 std::string registrationNumber;
 std::string make;
 std::string model;
 int yearOfManufacture;

 std::cin >> registrationNumber;
 std::cin >> make;
 std::cin >> model;
 std::cin >> yearOfManufacture;

 Vehicle vehicle(registrationNumber, make, model, yearOfManufacture);
 vehicle.displayDetails();

 return 0;
}