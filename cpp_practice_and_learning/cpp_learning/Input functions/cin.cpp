// ----- 2 cin

/*cin is a standard C++ object that reads data from the standard input stream(keyboard by default).
It can be used with various types of data, including integers, floating - point numbers, characters, and strings.*/

#include <iostream>
using namespace std;

int main()
{
 string name;
 int age;

 cout << "Enter your name: ";
 cin >> name; // Reads until space
 cout << "Enter your age: ";
 cin >> age;

 cout << "Name: " << name << ", Age: " << age << endl;
 return 0;
}

// cin stops reading at whitespace.For full - line input, use getline.
// For reading an entire line, you typically use getline with cin:
// std::getline(std::cin, str);
