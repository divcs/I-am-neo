#include <iostream>
using namespace std;

int main()
{

 float amount = 0;
 float meter_reading;

 cout << "Enter your meter reading:";
 cin >> meter_reading;

 if (meter_reading > 100)
 {
  amount = meter_reading * 6.95;
 }
 else
 {
  amount = meter_reading * 5.95;
 }

 cout << "\nYour total amount is: " << amount;

 return 0;
}