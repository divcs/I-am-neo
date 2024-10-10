
// 2 cout

// cout is a stream object in C++ that outputs data to the standard output(usually the console).
// It can handle various data types, including strings, integers, floats, characters, etc., using the insertion operator(<<).

// Flexible: cout can print different data types in the same line, and you can chain multiple outputs together.
// Formatted Output: cout supports manipulators (like std::endl for a newline or std::setw for width), giving it powerful formatting capabilities.
// Type-Safe: The insertion operator (<<) ensures that the correct type is used, reducing the risk of formatting errors.
// Extensible: You can define your own types to work with cout by overloading the << operator
#include <stdio.h>

int main()
{
 int num = 42;
 float pi = 3.14159;
 char name[] = "Alice";

 printf("Integer: %d\n", num);         // Prints an integer
 printf("Floating-point: %.2f\n", pi); // Prints a float with 2 decimal places
 printf("Hello, %s!\n", name);         // Prints a formatted string
 return 0;
}
