#include <iostream>

class Base {
public:
    Base(int num) : number(num) {}
    virtual ~Base() {}
    virtual int performOperation(int value) { return value + number; }

protected:
    int number;
};

class Derived : public Base {
public:
    Derived(int num) : Base(num) {}
    ~Derived() {}
    int performOperation(int value) override { return value * number; }
};

int main() {
    Base* obj = new Derived(5);
    int result = obj->performOperation(10);
    delete obj;

    std::cout << result;
    return 0;
}