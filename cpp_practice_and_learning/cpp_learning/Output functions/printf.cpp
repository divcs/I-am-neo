// 3 printf
#include <iostream>
#include <iomanip> // For std::setprecision

int main()
{
 int num = 42;
 double pi = 3.14159;
 std::string name = "Alice";

 std::cout << "Integer: " << num << std::endl;                                             // Prints an integer
 std::cout << "Floating-point: " << std::fixed << std::setprecision(2) << pi << std::endl; // Prints a float with 2 decimal places
 std::cout << "Hello, " << name << "!" << std::endl;                                       // Prints a string with std::endl for newline

 return 0;
}
