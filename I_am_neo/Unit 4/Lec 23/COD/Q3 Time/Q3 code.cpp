#include <iostream>
#include <iomanip>

class Time
{
private:
 int hours;
 int minutes;

public:
 Time(int h, int m) : hours(h), minutes(m) {}

 void operator--()
 {
  if (hours == 0 && minutes == 0)
  {
   std::cout << "Cannot decrement further. Time is already at 00:00." << std::endl;
  }
  else
  {
   if (minutes == 0)
   {
    minutes = 59;
    hours = (hours == 0) ? 23 : hours - 1;
   }
   else
   {
    minutes--;
   }
  }
 }

 void displayTime(const std::string &message) const
 {
  std::cout << message << hours << ":"
            << std::setw(2) << std::setfill('0') << minutes; // Only minutes have leading zeros
 }
};

int main()
{
 int h, m;
 std::cin >> h >> m;

 Time time(h, m);

 std::cout << "Time before decrement: ";
 time.displayTime("");   // Display original time without a new line
 std::cout << std::endl; // Add newline after displaying original time

 --time; // Decrement the time

 std::cout << "Time after decrement: ";
 time.displayTime("");   // Display updated time without a new line
 std::cout << std::endl; // Add newline after displaying updated time

 return 0;
}
