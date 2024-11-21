Single File Programming Question
Problem Statement



Emma, a mathematics enthusiast, frequently assists her friends with permutations and combinations, and to simplify her calculations, she decides to develop a program that dynamically computes these values based on user input.



The program is built around a class named PermutationsAndCombinations, which utilizes a dynamic constructor to allocate memory for the values of n and r. The class includes several key functions: a constructor that initializes n and r through dynamic memory allocation, a factorial(int num) method to compute the factorial of a number recursively, and methods to calculate permutations nPr and combinations nCr.



Permutation (nPr):

Formula: nPr = n! / (n - r)!



Combination (nCr): 

Formula: nCr = n! / (r! * (n - r)!)

Input format :
The input consists of two integers, n, and r separated by a space.

Output format :
The output displays integer with the results in the following format:

Permutations (nPr): <value of permutations>

Combinations (nCr): <value of combinations>



Refer to the sample output for formatting specifications.

Code constraints :
0 ≤ n, r ≤ 10

n ≥ r

Sample test cases :
Input 1 :
5 3
Output 1 :
Permutations (nPr): 60
Combinations (nCr): 10
Input 2 :
4 7
Output 2 :
Invalid input

#include <iostream>
using namespace std;

class PermutationsAndCombinations {
private:
    int *n, *r; // dynamically allocated memory for n and r

public:
    // Constructor to allocate memory and initialize n and r
    PermutationsAndCombinations(int nValue, int rValue) {
        n = new int;
        r = new int;
        *n = nValue;
        *r = rValue;
    }

    // Destructor to free allocated memory
    ~PermutationsAndCombinations() {
        delete n;
        delete r;
    }

    // Factorial function
    int factorial(int num) {
        if (num <= 1) return 1;
        return num * factorial(num - 1);
    }

    // Method to calculate permutations nPr
    int permutations() {
        return factorial(*n) / factorial(*n - *r);
    }

    // Method to calculate combinations nCr
    int combinations() {
        return factorial(*n) / (factorial(*r) * factorial(*n - *r));
    }

    // Method to validate input
    bool validateInput() {
        return *n >= 0 && *r >= 0 && *n <= 10 && *r <= 10 && *n >= *r;
    }
};

int main() {
    int n, r;
    cin >> n >> r;

    // Create object and check validity
    PermutationsAndCombinations obj(n, r);

    if (obj.validateInput()) {
        cout << "Permutations (nPr): " << obj.permutations() << endl;
        cout << "Combinations (nCr): " << obj.combinations() << endl;
    } else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
