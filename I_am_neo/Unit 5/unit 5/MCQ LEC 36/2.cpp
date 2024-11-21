#include <iostream>
using namespace std;

class Phone {
public:
    int price;
    Phone() : price(500) {}
    ~Phone() { cout << price - 100; }
};

int main() {
    Phone* phPtr = new Phone;
    delete phPtr;
    return 0;
}