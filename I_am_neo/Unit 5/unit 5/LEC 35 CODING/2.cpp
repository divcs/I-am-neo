Problem Statement



Tao, an engineer, is developing a software tool designed for educational purposes that performs basic arithmetic operations, including addition, subtraction, multiplication, and division.



To maintain flexibility and adhere to object-oriented programming principles, he plans to create an abstract class named operationsBase, which will include four pure virtual functions: void addition(), void subtraction(), void multiplication(), and void division().



A derived class, operationsDerived, will implement these functions, enabling users to input two integers for the calculations. The program will output the results of all operations in sequence, separated by spaces while ensuring an error message is displayed for division by zero.

Input format :
The input consists of two integer values, a and b, separated by a space.

Output format :
The output displays the integers representing the results of the four arithmetic operations: addition, subtraction, multiplication, and division. Each result will be separated by a space.



If division by zero occurs, print "Division by 0 is not allowed.", in the next line.



Refer to the sample output for the formatting specifications.

Code constraints :
-10000 ≤ a, b ≤ 10000

The division operation should be valid, i.e., the value of b should not be zero.

Sample test cases :
Input 1 :
20 10
Output 1 :
30 10 200 2 
Input 2 :
5248 0
Output 2 :
5248 5248 0 
Division by 0 is not allowed.
Input 3 :
-10 10
Output 3 :
0 -20 -100 -1 

#include <iostream>
#include <iomanip>
using namespace std;

// Abstract base class
class operationsBase {
public:
    virtual void addition() = 0;
    virtual void subtraction() = 0;
    virtual void multiplication() = 0;
    virtual void division() = 0;
};

// Derived class
class operationsDerived : public operationsBase {
private:
    int a, b;  // Two integers for calculations

public:
    // Constructor to initialize a and b
    operationsDerived(int num1, int num2) : a(num1), b(num2) {}

    // Implement addition
    void addition() override {
        cout << a + b << " ";
    }

    // Implement subtraction
    void subtraction() override {
        cout << a - b << " ";
    }

    // Implement multiplication
    void multiplication() override {
        cout << a * b << " ";
    }

    // Implement division
    void division() override {
        if (b == 0) {
            cout << endl << "Division by 0 is not allowed.";
        } else {
            cout << a / b;
        }
    }
};

int main() {
    // Read input values
    int a, b;
    cin >> a >> b;

    // Create an object of operationsDerived
    operationsDerived operations(a, b);

    // Call the operations
    operations.addition();
    operations.subtraction();
    operations.multiplication();
    operations.division();  // Division should be printed on the same line if valid

    return 0;
}
