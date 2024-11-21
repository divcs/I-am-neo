#include <iostream>
using namespace std;
class Car {
public:
    Car(const char* m) : model(m) {}
    const char* getModel() { return model; }
private:
    const char* model;
};

int main() {
    Car* c1 = new Car("Sedan");
    Car* c2 = new Car("SUV");
    delete c2;
    cout << c1->getModel();
    delete c1;
    return 0;
}