#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

#define PI 3.14 // Corrected definition without semicolon

class Area
{
 int sq, l, b;
 float r, base, height;

public:
 // Inline function to get dimensions
 inline void get(int sq, int l, int b, float r, float base, float height)
 {
  this->sq = sq;
  this->l = l;
  this->b = b;
  this->r = r;
  this->base = base;
  this->height = height;
 }

 // Inline function to calculate square area
 inline int squareArea()
 {
  return sq * sq;
 }

 // Inline function to calculate rectangle area
 inline int rectangleArea()
 {
  return l * b;
 }

 // Inline function to calculate circle area
 inline float circleArea()
 {
  return PI * r * r;
 }

 // Inline function to calculate parallelogram area
 inline float parallelogramArea()
 {
  return base * height; // Correct formula
 }
};

int main()
{
 int sq, l, b;
 float r, base, height;

 // Input values
 cin >> sq;
 cin >> l >> b;
 cin >> r;
 cin >> base >> height;

 Area a;
 a.get(sq, l, b, r, base, height); // Using the get method to set dimensions

 // Calculate areas
 int sqA = a.squareArea();
 int rectA = a.rectangleArea();
 float cA = a.circleArea();
 float paA = a.parallelogramArea();

 // Setting precision for float output
 cout << fixed << setprecision(2);

 // Output results
 cout << "Area of the square: " << sqA << endl;
 cout << "Area of the rectangle: " << rectA << endl;
 cout << "Area of the circle: " << cA << endl;
 cout << "Area of the parallelogram: " << paA << endl;

 return 0;
}