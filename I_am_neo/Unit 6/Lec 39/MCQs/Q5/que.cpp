#include <iostream>
#include <string>
#include <stdexcept>
int square(int x)
{
 if (x < 0)
  throw std::runtime_error("Negative number detected");
 return x * x;
}
std::string square(const std::string &ss)
{
 if (ss.empty())
  throw std::invalid_argument("Empty string detected");
 return ss + ss;
}
int main()
{
 int i = 4, ii;
 std::string ww("A");
 try
 {
  ii = square(i);
  std::cout << i << ii;
 }
 catch (const std::exception &ex)
 {
  std::cout << "Exception caught: " << ex.what() << std::endl;
 }
 try
 {
  std::cout << square(ww) << std::endl;
 }
 catch (const std::exception &ex)
 {
  std::cout << "Exception caught: " << ex.what() << std::endl;
  throw; // Rethrow the caught exception
 }
 return 0;
}
