#include <iostream>
using namespace std;

class Temperature
{
 float celsius;

public:
 // Constructor for basic-to-class conversion
 Temperature(float temp) : celsius(temp) {}

 // Conversion operator for class-to-basic conversion
 operator float() const
 {
  return celsius;
 }

 void display()
 {
  cout << "Temperature: " << celsius << "°C" << endl;
 }
};

int main()
{
 // Basic to class type
 float tempBasic = 37.5;
 Temperature tempClass = tempBasic;

 tempClass.display();

 // Class to basic type
 float tempConverted = tempClass;
 cout << "Converted to basic type: " << tempConverted << "°C" << endl;

 return 0;
}
