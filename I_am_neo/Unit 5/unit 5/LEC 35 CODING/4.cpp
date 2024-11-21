Problem Statement



Diego, a software engineer, is tasked with building a smart utility to process numbers based on whether they are even or odd. He wants to design the solution using object-oriented programming principles, specifically utilizing an abstract class and a pure virtual function.



Diego needs to create an abstract class A that contains a pure virtual function print(). The derived class B will implement this function and additional methods to handle the logic for calculating the cube, square, sum, and difference of numbers.



If the given number is even, calculate the sum of its cube and its square.
If the given number is odd, calculate the difference between its cube and its square.
The result should be displayed using a function defined in the derived class, overriding a pure virtual function from the abstract base class.
Input format :
The input consists of an integer.

Output format :
If the given number is even, displays an integer representing the sum of the cube and square of the number.

If the given number is odd, displays an integer representing the difference between the cube and square of the number.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 100

Sample test cases :
Input 1 :
5
Output 1 :
100
Input 2 :
4
Output 2 :
80

#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class A {
public:
    virtual void print() = 0;  // Pure virtual function
};

// Derived class B
class B : public A {
private:
    int num;

public:
    // Constructor to initialize the number
    B(int n) : num(n) {}

    // Override print function to calculate and print the result
    void print() override {
        int cube = num * num * num;
        int square = num * num;
        if (num % 2 == 0) {  // Even number
            cout << cube + square << endl;
        } else {  // Odd number
            cout << cube - square << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    // Create an object of class B
    B obj(n);

    // Call the print function
    obj.print();

    return 0;
}


