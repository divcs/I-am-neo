#include <iostream>

class Animal {
public:
    virtual void makeSound() { std::cout << "Animal makes a sound." << std::endl; }
};

class Dog : public Animal {
public:
    void makeSound() override { std::cout << "Dog barks." << std::endl; }
};

int main() {
    Animal* animals[2];
    animals[0] = new Animal;
    animals[1] = new Dog;
    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
        delete animals[i];
    }
    return 0;
}