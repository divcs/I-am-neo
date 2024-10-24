/*
Multi Choice Type Question

What will be the output for the following code?

Company Tags: Wipro

    Box box1(1, 2, 3);

#include <iostream>
using namespace std;
class Box
{
public:
 int length, width, height;
 Box(int l, int w, int h) : length(l), width(w), height(h) {}
 // Binary operator overloading goes here
};
int main()
{
 Box box1(1, 2, 3);
 Box box2(4, 5, 6);
 Box result = box1 _______ box2;
 cout << result.length << ", " << result.width << ", " << result.height;
 return 0;
}

Options : 7 / 6 3 / 5 4 / 3 None of the mentioned options

*/

// CODE

#include <iostream>
using namespace std;

class Box
{
public:
 int length, width, height;

 Box(int l, int w, int h) : length(l), width(w), height(h) {}

 // Overloading the + operator to concatenate the dimensions of two boxes
 Box operator+(const Box &other)
 {
  return Box(length + other.length, width + other.width, height + other.height);
 }
};

int main()
{
 Box box1(1, 2, 3);
 Box box2(4, 5, 6);
 Box result = box1 + box2;                                               // Using the overloaded + operator
 cout << result.length << ", " << result.width << ", " << result.height; // Outputs: 5, 7, 9
 return 0;
}
