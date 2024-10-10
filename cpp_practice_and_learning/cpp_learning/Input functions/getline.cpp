// Reads a line of text(including spaces) from standard input.Unlike cin, it reads an entire line.
// std::getline(std::cin, variable);

#include <iostream>
#include <string>
using namespace std;

int main()
{
 string name;
 cout << "Enter your full name: ";
 getline(cin, name); // Reads an entire line
 cout << "Hello, " << name << "!" << endl;
 return 0;
}
