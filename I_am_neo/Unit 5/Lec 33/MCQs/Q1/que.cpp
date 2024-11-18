#include <iostream>
#include <string>
int main()
{
 std::string *ptr = new std::string;
 delete ptr;
 *ptr = "Hello";
 std::cout << *ptr;
 return 0;
}
/*

Prints nothing due to memory leak (correct)
The code does not compile
Random garbage value is printed
Prints Hello

*/