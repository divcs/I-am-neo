Problem statement



David is tasked with creating a versatile calculator program that can perform various mathematical operations based on user inputs. The calculator should be able to handle three types of operations: square of a number, modulus between two integers, and quotient between two double-point numbers. Write a program to accomplish this task.



Function Prototype

int calc(int a)

int calc(int a, int b)

double calc(double a, double b)

Input format :
The input consists of 2 space-separated integers and 2 space-separated double values.



Note: The first input for the Square function, the first two inputs for the modulus function, and the last two inputs for the division function.

Output format :
The output prints the following three lines:

"Square of x: <result>" - The square of x.

"Modulus of x, y: <result>" - The result of x % y.

"Quotient of n1, n2: <result>" - The result of n1 / n2, rounded to two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
0.0 ≤ double values ≤ 1000.0

0 ≤ integer values ≤ 1000

Sample test cases :
Input 1 :
2 5 6.3 5.2
Output 1 :
Square of 2: 4
Modulus of 2, 5: 2
Quotient of 6.3, 5.2: 1.21
Input 2 :
8 6 5.8 2.3
Output 2 :
Square of 8: 64
Modulus of 8, 6: 2
Quotient of 5.8, 2.3


IMAGE TYPE QUESTION :-
#include <iostream>
#include <iomanip> // For setting precision in division result
using namespace std;

// Function to calculate the square of an integer
int calc(int a) {
    return a * a;
}

// Function to calculate the modulus of two integers
int calc(int a, int b) {
    return a % b;
}

// Function to calculate the quotient of two doubles
double calc(double a, double b) {
    return a / b;
}

int main() {
    int x, y;
    double n1, n2;
    
    // Reading the input values
    cin >> x >> y >> n1 >> n2;
    
    // Output the square of the first integer
    cout << "Square of " << x << ": " << calc(x) << endl;
    
    // Output the modulus of the two integers
    cout << "Modulus of " << x << ", " << y << ": " << calc(x, y) << endl;
    
    // Output the quotient of the two doubles, rounded to two decimal places
    cout << fixed << setprecision(2);  // Set precision to 2 decimal places
    cout << "Quotient of " << n1 << ", " << n2 << ": " << calc(n1, n2) << endl;
    
    return 0;
}
