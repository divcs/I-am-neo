#include <iostream>
#include <string>
using namespace std;

int main()
{
 string str = "Hello";
 str.append(" World");
 cout << str << endl; // Hello World

 str.insert(5, ",");
 cout << str << endl; // Hello, World

 str.replace(0, 5, "Hi");
 cout << str << endl; // Hi, World

 return 0;
}
