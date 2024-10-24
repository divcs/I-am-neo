#include <iostream>
using namespace std;

class Rectangle
{
private:
 int width;
 int height;

public:
 // Constructor to initialize width and height
 Rectangle(int w, int h) : width(w), height(h) {}

 // Overload the '==' operator to compare two rectangles
 bool operator==(const Rectangle &other) const
 {
  return (width == other.width && height == other.height);
 }
};

int main()
{
 int width1, height1, width2, height2;

 // Reading the dimensions of the two rectangles
 cin >> width1 >> height1;
 cin >> width2 >> height2;

 // Creating two instances of Rectangle with the input dimensions
 Rectangle rect1(width1, height1);
 Rectangle rect2(width2, height2);

 // Using the overloaded '==' operator to compare the rectangles
 if (rect1 == rect2)
 {
  cout << "Rectangle 1 and Rectangle 2 are equal in size." << endl;
 }
 else
 {
  cout << "Rectangle 1 and Rectangle 2 are not equal in size." << endl;
 }

 return 0;
}
