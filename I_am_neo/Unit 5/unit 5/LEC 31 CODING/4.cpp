Problem Statement



Sheela needs to create a program that takes a list of integers and categorizes them into prime and non-prime numbers. Write a function isPrime to determine if a number is prime. The program should prompt the user to enter the count of integers (N), followed by N integers, and then display the prime and non-prime numbers separately.



Use dynamic arrays to store prime and non-prime numbers based on input size, ensuring correct memory allocation with new and delete. 

Input format :
The first line contains an integer N, representing the number of integers they want to classify.

The second line contains N integers, each separated by spaces.

Output format :
If there are prime numbers in the array, print them in line with the format: "Prime numbers: p1 p2 p3 ....".

If no prime numbers are found, print: "No prime numbers found."

Print the non-prime numbers in a line with the format: "Non-prime numbers: np1 np2 np3 ....".

If no non-prime numbers are found, print: "No non-prime numbers found."



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ N ≤ 35

-500 ≤ elements ≤ 500

Sample test cases :
Input 1 :
7
-12 15 19 -23 32 41 47
Output 1 :
Prime numbers: 19 41 47 
Non-prime numbers: -12 15 -23 32 
Input 2 :
8
1 4 6 8 9 0 12 15
Output 2 :
No prime numbers found.
Non-prime numbers: 1 4 6 8 9 0 12 15 
Input 3 :
4
17 29 31 73
Output 3 :
Prime numbers: 17 29 31 73 
No non-prime numbers found.


#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter the number of integers: ";
    cin >> N;
    
    int* numbers = new int[N];
    
    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    int* primes = new int[N];
    int* nonPrimes = new int[N];
    
    int primeCount = 0, nonPrimeCount = 0;
    
    for (int i = 0; i < N; i++) {
        if (isPrime(numbers[i])) {
            primes[primeCount++] = numbers[i];
        } else {
            nonPrimes[nonPrimeCount++] = numbers[i];
        }
    }
    
    if (primeCount > 0) {
        cout << "Prime numbers: ";
        for (int i = 0; i < primeCount; i++) {
            cout << primes[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No prime numbers found." << endl;
    }

    if (nonPrimeCount > 0) {
        cout << "Non-prime numbers: ";
        for (int i = 0; i < nonPrimeCount; i++) {
            cout << nonPrimes[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No non-prime numbers found." << endl;
    }

    delete[] numbers;
    delete[] primes;
    delete[] nonPrimes;
    
    return 0;
}
