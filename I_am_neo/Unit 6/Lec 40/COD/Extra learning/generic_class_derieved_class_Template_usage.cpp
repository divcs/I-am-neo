#include <iostream>
#include <string>

using namespace std;

// Generic class template
template <typename T>
class Shape
{
protected:
 T dimension1;
 T dimension2;

public:
 Shape(T d1, T d2) : dimension1(d1), dimension2(d2) {}

 virtual T area() const = 0; // Pure virtual function for area
};

// Derived class for Circle
template <typename T>
class Circle : public Shape<T>
{
public:
 Circle(T radius) : Shape<T>(radius, 0) {}

 T area() const override
 {
  return 3.14159 * this->dimension1 * this->dimension1;
 }
};

// Derived class for Square
template <typename T>
class Square : public Shape<T>
{
public:
 Square(T side) : Shape<T>(side, 0) {}

 T area() const override
 {
  return this->dimension1 * this->dimension1;
 }
};

// Derived class for Triangle
template <typename T>
class Triangle : public Shape<T>
{
public:
 Triangle(T base, T height) : Shape<T>(base, height) {}

 T area() const override
 {
  return 0.5 * this->dimension1 * this->dimension2;
 }
};

int main()
{
 Circle<double> circle(5.5);
 Square<double> square(10.2);
 Triangle<double> triangle(8.3, 6.7);

 cout << "Circle Area: " << circle.area() << endl;
 cout << "Square Area: " << square.area() << endl;
 cout << "Triangle Area: " << triangle.area() << endl;

 return 0;
}
