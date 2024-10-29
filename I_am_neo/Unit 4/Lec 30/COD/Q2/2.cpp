#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Shape
{
protected: // Changed to protected so derived classes can access it
 string name;

public:
 Shape(const string &name) : name(name)
 {
  cout << "Shape Constructor: Creating a shape - " << name << endl;
 }

 virtual ~Shape()
 {
  cout << "Shape Destructor: Destroying a shape - " << name << endl;
 }
};

class Circle : public Shape
{
 double radius;

public:
 Circle(const string &name, double r) : Shape(name), radius(r)
 {
  cout << "Circle Constructor: Creating a circle - " << name << endl;
 }

 double area()
 {
  return 3.14 * radius * radius;
 }

 ~Circle() override
 {
  cout << "Circle Destructor: Destroying a circle - " << name << endl; // Access name directly
 }
};

class Square : public Shape
{
 double side;

public:
 Square(const string &name, double s) : Shape(name), side(s)
 {
  cout << "Square Constructor: Creating a square - " << name << endl;
 }

 double area()
 {
  return side * side;
 }

 ~Square() override
 {
  cout << "Square Destructor: Destroying a square - " << name << endl; // Access name directly
 }
};

int main()
{
 string circleName, squareName;
 double radius, side;

 cin >> circleName;
 cin >> radius;
 cin >> squareName;
 cin >> side;

 Circle circle(circleName, radius);
 Square square(squareName, side);

 cout << fixed << setprecision(2);
 cout << "Area of " << circleName << ": " << circle.area() << endl;
 cout << "Area of " << squareName << ": " << square.area() << endl;

 return 0;
}
