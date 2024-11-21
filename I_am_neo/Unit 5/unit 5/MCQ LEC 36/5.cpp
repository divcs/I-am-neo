#include <iostream>
using namespace std;

class A {
public:
    virtual void show() const {
        cout << "A" << endl;
    }
};

class B : public A {
public:
    void show() const override {
        cout << "B" << endl;
    }
};

class C : public B {
public:
    void show() const override {
        cout << "C" << endl;
    }
};

void printInfo(const A& obj) {
    obj.show();
}

int main() {
    A a;
    B b;
    C c;
    A* ptrA = &a;
    A* ptrB = &b;
    A* ptrC = &c;

    printInfo(*ptrA);  
    printInfo(*ptrB);  
    printInfo(*ptrC); 

    return 0;
}