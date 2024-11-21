#include <iostream>
class Rectangle
{
public:
 Rectangle() : length(new double(5.0)), width(new double(3.0)) {}
 virtual ~Rectangle()
 {
  delete length;
  delete width;
 }
 double GetArea() const
 {
  return *length * *width;
 }
 void SetArea(double newLength, double newWidth)
 {
  length = new double(newLength);
  width = new double(newWidth);
 }

private:
 double *length;
 double *width;
};
int main()
{
 Rectangle rect;
 std::cout << "Area: " << rect.GetArea();
 rect.SetArea(10.0, 5.0);
 return 0;
}
/*

    Answer here
        The code will output "Area: 15" without any memory leak. 
        The code will output "Area: 15" but encounter a memory leak.
        The code will result in a segmentation fault due to a memory leak.
        The code will result in a compilation error due to an invalid dereference operation.
*/