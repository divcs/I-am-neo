#include <iostream>
using namespace std;

class Employee {
public:
    virtual void showSalary() const {
        cout << "Salary: $5000" << endl;
    }
};

class Manager : public Employee {
public:
    void showSalary() const override {
        cout << "Salary: $8000" << endl;
    }
};

int main() {
    Employee* empPtr1 = new Manager();
    empPtr1->showSalary();

    Employee* empPtr2 = new Employee();
    empPtr2->showSalary();

    delete empPtr1;
    delete empPtr2;
    return 0;
}