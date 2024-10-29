#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

// Base class with a virtual function amount()
class currentBill
{
public:
 virtual double amount() = 0; // Pure virtual function
};

// Derived class for Fan
class Fan : public currentBill
{
 double power, hours;

public:
 Fan(double p, double h) : power(p), hours(h) {}

 double amount() override
 {
  return ((power * hours) / 1000) * 1.5;
 }
};

// Derived class for Light
class Light : public currentBill
{
 double power, hours;

public:
 Light(double p, double h) : power(p), hours(h) {}

 double amount() override
 {
  return ((power * hours) / 1000) * 1.5;
 }
};

// Derived class for TV
class TV : public currentBill
{
 double power, hours;

public:
 TV(double p, double h) : power(p), hours(h) {}

 double amount() override
 {
  return ((power * hours) / 1000) * 1.5;
 }
};

int main()
{
 double powerFan, hoursFan;
 double powerLight, hoursLight;
 double powerTV, hoursTV;

 // Taking inputs for Fan, Light, and TV
 cin >> powerFan >> hoursFan;
 cin >> powerLight >> hoursLight;
 cin >> powerTV >> hoursTV;

 // Creating objects for each appliance
 Fan fan(powerFan, hoursFan);
 Light light(powerLight, hoursLight);
 TV tv(powerTV, hoursTV);

 // Calculating total amount
 double totalAmount = fan.amount() + light.amount() + tv.amount();

 // Displaying result rounded to 2 decimal places
 cout << fixed << setprecision(2) << totalAmount << endl;

 return 0;
}
