/*
Problem Statement

You need to create a program that models geometric shapes, specifically rectangles and cubes. Implement a Rectangle class with attributes for width and length, and methods to compute its area. Extend this with a Cube class that inherits from Rectangle and includes a height attribute, computing the volume of the cube. Write a program that reads the width, length, and height of a cube from user input, then displays the cube's width, length, height, base area, and volume.

Formula

base height = width * length

volume = width * length * height

Input format :
The input consists of three double-precision floating-point numbers on separate lines, which represent the dimensions of a cube: cubeWidth, cubeLength, and cubeHeight.

Output format :
The output displays the properties of the cube, including the width, length, height, base area, and volume, each on a separate line.

Refer to the sample output for exact specifications.

Code constraints :
The input values should be valid double-precision floating-point numbers.

Sample test cases :
Input 1 :
10.2
20.5
30.3
Output 1 :
Width: 10.2
Length: 20.5
Height: 30.3
Base area: 209.1
Volume: 6335.73
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Rectangle
{
protected:
 double width;
 double length;

public:
 Rectangle(double w, double l) : width(w), length(l) {}

 double baseArea()
 {
  return width * length;
 }

 double getWidth()
 {
  return width;
 }

 double getLength()
 {
  return length;
 }
};

class Cube : public Rectangle
{
private:
 double height;

public:
 Cube(double w, double l, double h) : Rectangle(w, l), height(h) {}

 double volume()
 {
  return baseArea() * height;
 }

 double getHeight()
 {
  return height;
 }
};

int main()
{
 double cubeWidth, cubeLength, cubeHeight;

 cin >> cubeWidth;
 cin >> cubeLength;
 cin >> cubeHeight;

 Cube cube(cubeWidth, cubeLength, cubeHeight);

 cout << "Width: " << cube.getWidth() << endl;
 cout << "Length: " << cube.getLength() << endl;
 cout << "Height: " << cube.getHeight() << endl;
 cout << "Base area: " << cube.baseArea() << endl;

 cout << "Volume: " << round(cube.volume() * 100.0) / 100.0 << endl;

 return 0;
}