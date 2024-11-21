#include <iostream>

int main() {
    float* ptr = new float(3.14);
    float* newPtr = ptr;
    delete ptr;
    std::cout << *newPtr;
    return 0;
}

ANS:- GARBAGE __valueless