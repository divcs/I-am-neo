#include <iostream>
#include <stdexcept>

class TestVirt
{
public:
 virtual int TestFunct(int Var1)
 {
  try
  {
   if (Var1 < 0)
   {
    throw std::runtime_error("Negative number detected");
   }
   return Var1 * 2;
  }
  catch (const std::exception &ex)
  {
   std::cout << "Inner Exception caught: " << ex.what() << std::endl;
   throw; // Rethrow the caught exception
  }
 }
};
int main()
{
 TestVirt Var1;
 try
 {
  std::cout << Var1.TestFunct(197) << std::endl;
 }
 catch (const std::exception &ex)
 {
  std::cout << "Outer Exception caught: " << ex.what() << std::endl;
 }
 return 0;
}
