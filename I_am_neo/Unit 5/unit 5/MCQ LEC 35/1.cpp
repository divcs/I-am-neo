#include <iostream>
using namespace std;

class AbstractPrinter {
public:
    virtual void print() const = 0;
};

class LaserPrinter : public AbstractPrinter {
public:
    void print() const override {
        cout << "Printing with laser printer";
    }
};

int main() {
    AbstractPrinter* printer = new LaserPrinter();
    printer->print();
    return 0;
}