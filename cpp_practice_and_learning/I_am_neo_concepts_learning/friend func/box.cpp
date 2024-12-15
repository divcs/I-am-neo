#include <iostream>
using namespace std;

class Box
{
private:
 double width;

public:
 Box(double w) : width(w) {}

 // Friend function declaration
 friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b)
{
 cout << "Width: " << b.width << endl;
}

int main()
{
 Box box(10.5);
 printWidth(box); // Accessing private member
 return 0;
}
