#include <iostream>
using namespace std;

class Complex
{
 int real;
 int img;

public:
 // parameterized constructor
 Complex(int r, int i) : real(r), img(i) {}

 // adds real and imaginary parts: Copy constructor
 Complex add(const Complex &other) const
 {
  return Complex(real + other.real, img + other.img);
 }

 // prints the complex number
 void print() const
 {
  std::cout << real << " + " << img << "i" << endl;
 }
};

int main()
{
 int user_input_real1, user_input_img1; // First complex number inputs
 int user_input_real2, user_input_img2; // Second complex number inputs

 // taking user input for complex numbers
 cout << "First Complex number: ";
 cin >> user_input_real1 >> user_input_img1;

 cout << "Second Complex number: ";
 cin >> user_input_real2 >> user_input_img2;

 // creating complex numbers with user input
 Complex c1(user_input_real1, user_input_img1);
 Complex c2(user_input_real2, user_input_img2);

 Complex sum = c1.add(c2);
 cout << "Sum: ";
 sum.print();

 return 0;
}
