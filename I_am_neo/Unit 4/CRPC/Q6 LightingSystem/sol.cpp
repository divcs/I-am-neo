#include <iostream>
#include <cmath>

using namespace std;

class LightingSystem
{
public:
 int brightness;

 LightingSystem(int initialBrightness)
 {
  brightness = initialBrightness;
 }

 int getBrightness()
 {
  return brightness;
 }
};

class SecuritySystem
{
public:
 int securityStatus;

 SecuritySystem(int initialSecurityStatus)
 {
  securityStatus = initialSecurityStatus;
 }

 int getSecurityStatus()
 {
  return securityStatus;
 }
};

class SmartHome : public LightingSystem, public SecuritySystem
{
public:
 SmartHome(int initialBrightness, int initialSecurityStatus) : LightingSystem(initialBrightness), SecuritySystem(initialSecurityStatus) {}

 void displayStatus(int additionalBrightness, int additionalSecurityStatus)
 {
  int totalBrightness = brightness + additionalBrightness;
  int totalSecurityStatus = securityStatus + additionalSecurityStatus;
  int brightnessDifference = abs(brightness - securityStatus);

  cout << "Total Brightness: " << totalBrightness << endl;
  cout << "Total Security Status: " << totalSecurityStatus << endl;
  cout << "Difference: " << brightnessDifference << endl;
 }
};

int main()
{
 int brightness, securityStatus, additionalBrightness, additionalSecurityStatus;
 cin >> brightness >> securityStatus >> additionalBrightness >> additionalSecurityStatus;

 SmartHome smartHome(brightness, securityStatus);
 smartHome.displayStatus(additionalBrightness, additionalSecurityStatus);

 return 0;
}