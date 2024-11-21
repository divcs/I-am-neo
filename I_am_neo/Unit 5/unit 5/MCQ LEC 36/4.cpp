#include <iostream>

class Bird {
public:
    void makeSound() {
        std::cout << "Chirp";
    }
};

int main() {
    Bird bird;
    Bird* ptr = &bird;
    ptr->makeSound();
    return 0;
}