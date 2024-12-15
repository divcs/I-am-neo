#include <iostream>
using namespace std;

class Point
{
private:
 int x, y; // Private members
public:
 Point(int x, int y) : x(x), y(y) {}

 // Declare a friend function to access private members
 friend ostream &operator<<(ostream &os, const Point &p);
};

// Friend function defined outside the class
ostream &operator<<(ostream &os, const Point &p)
{
 os << "(" << p.x << ", " << p.y << ")";
 return os;
}

int main()
{
 Point p1(3, 4);
 cout << p1; // Calls the friend function
 return 0;
}
