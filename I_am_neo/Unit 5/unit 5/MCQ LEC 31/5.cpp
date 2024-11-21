#include <iostream>
using namespace std;
class Cube {
public:
    Cube(double s) : side(s) {}
    double getVolume() { return side * side * side; }
private:
    double side;
};

int main() {
    Cube* c1 = new Cube(2.0);
    Cube* c2 = c1;
    delete c1;
    std::cout << c2->getVolume();
    return 0;
}