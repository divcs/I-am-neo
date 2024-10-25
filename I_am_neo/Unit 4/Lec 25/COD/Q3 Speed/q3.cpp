#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

class Speed
{
private:
 double speedInKmph;

public:
 // Constructor to initialize speed in km/h
 Speed(double speed) : speedInKmph(speed) {}

 // Conversion operator to convert Speed object to double (m/s)
 operator double() const
 {
  return speedInKmph * (1000.0 / 3600.0); // Convert km/h to m/s
 }
};

int main()
{
 double speedKmph;

 // Input speed in km/h
 cout << "Enter speed in km/h: ";
 cin >> speedKmph;

 // Create Speed object
 Speed speed(speedKmph);

 // Output converted speed in m/s
 cout << fixed << setprecision(3) << static_cast<double>(speed) << " m/s" << endl;

 return 0;
}
