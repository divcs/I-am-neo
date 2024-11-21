#include <iostream>
using namespace std;
class Circle {
public:
    Circle(double r) : radius(r) {}
    double area() { return 3.14 * radius * radius; }
private:
    double radius;
};

int main() {
    Circle* c = new Circle(2.5);
    Circle* d = new Circle(3.0);
    delete c;
    std::cout << d->area();
    delete d;
    return 0;
}