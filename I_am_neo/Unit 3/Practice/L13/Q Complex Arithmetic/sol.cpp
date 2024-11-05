#include <iostream>
#include <iomanip> // For std::setprecision

class Complex
{
private:
 float real;
 float imaginary;

public:
 // Default constructor
 Complex() : real(0.0), imaginary(0.0) {}

 // Method to set the values of the complex number
 void setvalue(float r, float im)
 {
  real = r;
  imaginary = im;
 }

 // Method to sum two complex numbers
 Complex sum(const Complex &other)
 {
  Complex result;
  result.real = this->real + other.real;
  result.imaginary = this->imaginary + other.imaginary;
  return result;
 }

 // Method to display the complex number
 void display() const
 {
  std::cout << std::fixed << std::setprecision(1); // Formatting to one decimal place
  std::cout << "Sum of two complex numbers is "
            << real << " + " << imaginary << "i" << std::endl;
 }

 // Destructor
 ~Complex()
 {
  // Destructor logic if needed
 }
};

int main()
{
 Complex c1, c2, c3; // Create instances of the Complex class

 // Input for c1
 float real1, imag1;
 std::cout << "Enter the real and imaginary parts of the first complex number: ";
 std::cin >> real1 >> imag1;
 c1.setvalue(real1, imag1); // Set values for c1

 // Input for c2
 float real2, imag2;
 std::cout << "Enter the real and imaginary parts of the second complex number: ";
 std::cin >> real2 >> imag2;
 c2.setvalue(real2, imag2); // Set values for c2

 // Calculate the sum of c1 and c2 and store it in c3
 c3 = c1.sum(c2);

 // Display the result
 c3.display();

 return 0; // The program will automatically call destructors for c1, c2, and c3
}