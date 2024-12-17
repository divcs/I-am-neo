#include <iostream>
using namespace std;

class Complex
{
private:
 double real;
 double imag;

public:
 Complex(double r = 0, double i = 0) : real(r), imag(i) {}

 // Friend function declaration for operator overloading
 friend Complex operator+(const Complex &c1, const Complex &c2);

 // Friend function declaration for output stream
 friend ostream &operator<<(ostream &out, const Complex &c);

 // Member function to display the complex number
 void display() const
 {
  cout << real << " + " << imag << "i" << endl;
 }
};

// Friend function to overload +
Complex operator+(const Complex &c1, const Complex &c2)
{
 return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// Friend function to overload <<
ostream &operator<<(ostream &out, const Complex &c)
{
 out << c.real << " + " << c.imag << "i";
 return out;
}

int main()
{
 Complex c1(3, 4);
 Complex c2(1, 2);
 Complex c3 = c1 + c2; // Uses the overloaded + operator

 cout << "Complex Number 1: " << c1 << endl; // Uses the overloaded <<
 cout << "Complex Number 2: " << c2 << endl;
 cout << "Sum: " << c3 << endl;

 return 0;
}

// or

#include <iostream>
using namespace std;

class Complex
{
 double real, imag;

public:
 Complex(double r = 0, double i = 0) : real(r), imag(i) {}

 // Overloading binary + operator
 Complex operator+(const Complex &other) const
 {
  return Complex(real + other.real, imag + other.imag);
 }

 void display() const
 {
  cout << real << " + " << imag << "i" << endl;
 }
};

int main()
{
 Complex c1(2.5, 3.5);
 Complex c2(1.5, 2.0);

 Complex sum = c1 + c2; // Using overloaded + operator

 cout << "First complex number: ";
 c1.display();
 cout << "Second complex number: ";
 c2.display();
 cout << "Sum: ";
 sum.display();

 return 0;
}
