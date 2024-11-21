#include <iostream>
using namespace std;

class Person {
public:
    virtual void showAge() {
        cout << "Age: 30" << endl;
    }
};

class Student : public Person {
public:
    void showAge() override {
        cout << "Age: 20" << endl;
    }
};

int main() {
    Person* personPtr = new Student();
    personPtr->showAge();
    delete personPtr;
    return 0;
}