// 1/5 test cases failed
#define M_PI 3.141592
#include <iostream>
#include <iomanip>
using namespace std;
template <class d>
class shapes
{
public:
 virtual d getArea() = 0;
 virtual d getD() = 0;
 virtual ~shapes() {}
};
template <class d>
class Circle : public shapes<d>
{
 d radius;

public:
 Circle(d rad) : radius(rad) {}
 d getArea() override
 {
  return M_PI * radius * radius;
 }
 d getD() override
 {
  return radius;
 }
};
template <class d>
class Cube : public shapes<d>
{
 d side;

public:
 Cube(d s) : side(s) {}
 d getArea() override
 {
  return side * side * 6.0;
 }
 d getD() override
 {

  return side;
 }
};

int main()
{

 int ch;

 double dim;

 cin >> ch >> dim;

 shapes<double> *sh = nullptr;

 if (ch == 1)
 {

  sh = new Circle<double>(dim);

  cout << "Circle Details:" << endl;

  cout << "Circle with radius: " << sh->getD() << endl;

  cout << "Area: " << sh->getArea();
 }

 else if (ch == 2)
 {

  sh = new Cube<double>(dim);

  cout << "Cube Details:" << endl;

  cout << "Cube with side length: " << sh->getD() << endl;

  cout << "Surface Area: " << sh->getArea();
 }

 else
 {

  cout << "invalid shape type selected.";
 }

 delete sh;
}
