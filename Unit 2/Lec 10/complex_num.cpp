#include <iostream>
using namespace std;

class Complex
{
public:
 int real;
 int imag;

 Complex(int r = 0, int i = 0)
 {
  real = r;
  imag = i;
 }
};

int main()
{
 int r1, i1, r2, i2;

 // Input for the first complex number
 cin >> r1 >> i1;

 // Input for the second complex number
 cin >> r2 >> i2;

 // Create instances of the Complex class using pointers
 Complex *obj1 = new Complex(r1, i1);
 Complex *obj2 = new Complex(r2, i2);

 // Display the real and imaginary parts of the first complex number
 cout << "Here the real part is " << obj1->real << endl;
 cout << "Here the imaginary part is " << obj1->imag << endl;

 // Display the real and imaginary parts of the second complex number
 cout << "Here the real part is " << obj2->real << endl;
 cout << "Here the imaginary part is " << obj2->imag << endl;

 // Deallocate memory allocated for the objects
 delete obj1;
 delete obj2;

 return 0;
}