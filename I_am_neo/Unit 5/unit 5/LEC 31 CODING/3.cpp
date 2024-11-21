Problem Statement



Roy is building a Fibonacci number calculator for a programming competition. The competition requires participants to write a program that generates the first 'n' Fibonacci numbers and prints the sequence.



Participants are not allowed to use any pre-calculated Fibonacci numbers or predefined functions for Fibonacci calculations. His task is to implement the Fibonacci number calculator. Write a program using dynamic memory allocation to accomplish this task.



Company Tags: Deloitte

Input format :
The input consists of a single integer, n.

Output format :
If n is less than or equal to zero, print: "Number of Fibonacci numbers should be positive!"



If n is positive, print the Fibonacci sequence of n numbers in the format: "Fibonacci Sequence: " followed by the first n Fibonacci numbers, separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 28

Sample test cases :
Input 1 :
5
Output 1 :
Fibonacci Sequence: 0 1 1 2 3 
Input 2 :
-2
Output 2 :
Number of Fibonacci numbers should be positive!
#include <iostream>
using namespace std;

void printFibonacciSequence(int n) {
    if (n <= 0) {
        cout << "Number of Fibonacci numbers should be positive!" << endl;
        return;
    }

    // Dynamically allocate memory for the Fibonacci sequence array
    int* fib = new int[n];

    // Initialize the first two Fibonacci numbers
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
    }

    // Calculate the Fibonacci sequence iteratively
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci sequence
    cout << "Fibonacci Sequence: ";
    for (int i = 0; i < n; ++i) {
        cout << fib[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] fib;
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    printFibonacciSequence(n);

    return 0;
}
