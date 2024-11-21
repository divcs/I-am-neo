#include <iostream>

int main() {
    int* ptr = new int(5);
    std::cout << *ptr << std::endl;
    delete ptr;
    std::cout << *ptr << std::endl;
    return 0;
}