#include <iostream>
#include <iomanip>

class WeatherData
{
private:
 double celsius;

public:
 WeatherData(double temp) : celsius(temp) {}

 double operator+() const
 {
  return (celsius * 9 / 5) + 32;
 }

 double operator-() const
 {
  return ((-celsius) * 9 / 5) + 32;
 }
};

int main()
{
 double temp;
 std::cin >> temp;

 WeatherData weather(temp);

 std::cout << std::fixed << std::setprecision(2) << +weather << std::endl;
 std::cout << std::fixed << std::setprecision(2) << -weather << std::endl;

 return 0;
}
