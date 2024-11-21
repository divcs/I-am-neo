#include <iostream>
using namespace std;

class AbstractMath {
public:
    virtual int operation(int a, int b) const = 0;
};

class Add : public AbstractMath {
public:
    int operation(int a, int b) const override {
        return a + b;
    }
};

int main() {
    AbstractMath* op = new Add();
    int result = op->operation(10, 5);
    cout << "Result: " << result;
    return 0;
}