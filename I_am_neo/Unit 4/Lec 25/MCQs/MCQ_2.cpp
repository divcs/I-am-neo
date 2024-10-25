// What will be the output for the following code?

#include <iostream>
using namespace std;
class Book
{
public:
 string title;
 Book(string t) : title(t) {}
 operator char *()
 {
  return &title[0];
 }
};
int main()
{
 Book b("C++ Programming");
 char *result = b;
 cout << result;
 return 0;
}

/*
Answer here

    C++ Programming (CORRECT)
    P
    Compile Time Error
    C
*/