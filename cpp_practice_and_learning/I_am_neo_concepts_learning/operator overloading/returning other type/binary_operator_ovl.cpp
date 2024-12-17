#include <iostream>
using namespace std;
class Complex
{
 float real;
 float img;

public:
 Complex(float x, float y) : real(x), img(y) {}

 Complex operator+(const Complex &other)
 {
  real = real + other.real;
  img = img + other.img;

  return Complex(real, img);
 }

 void display()
 {
  cout << "Final Complex num:" << real << "+" << img << "i" << endl;
 }
};
int main()
{
 Complex c1(10, 5.30);
 Complex c2(5.20, 10);

 Complex c3 = c1 + c2;
 c3.display();
 return 0;
}