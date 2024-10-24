Multi Choice Type Question
What will be the output for the following code?

Company Tags: Wipro

#include <iostream>
using namespace std;
class Fraction
{
public:
 int numerator;
 int denominator;
 Fraction(int n, int d) : numerator(n), denominator(d) {}
 Fraction operator+(Fraction &other)
 {
  int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
  int newDenominator = denominator * other.denominator;
  return Fraction(newNumerator, newDenominator);
 }
};
int main()
{
 Fraction f1(1, 2);
 Fraction f2(2, 3);
 Fraction result = f1 + f2;
 cout << result.numerator << "/" << result.denominator;
 return 0;
}

Options 7 / 6 3 / 5 4 / 3 None of the mentioned options