#include <iostream>
#include <iomanip> // for std::setprecision

class TemperatureConverter
{
public:
 // Function to convert Celsius to Fahrenheit
 double toFahrenheit(double celsius)
 {
  return (9.0 / 5.0) * celsius + 32.0;
 }

 // Function to convert Celsius to Kelvin
 double toKelvin(double celsius)
 {
  return celsius + 273.15;
 }
};

int main()
{
 double celsius;
 std::cout << "Enter temperature in Celsius: ";
 std::cin >> celsius;

 TemperatureConverter converter;
 double fahrenheit = converter.toFahrenheit(celsius);
 double kelvin = converter.toKelvin(celsius);

 std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
 std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
 std::cout << "Temperature in Kelvin: " << kelvin << std::endl;

 return 0;
}