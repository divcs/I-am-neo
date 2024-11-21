#include <iostream>

class Laptop {
public:
    void display() {
        std::cout << "Laptop screen turned on" << std::endl;
    }
};

class GamingLaptop : public Laptop {
public:
    void display() {
        std::cout << "Gaming laptop screen turned on" << std::endl;
    }
};

int main() {
    Laptop laptop;
    GamingLaptop gamingLaptop;
    Laptop* ptr = &gamingLaptop;
    ptr->display();
    return 0;
}