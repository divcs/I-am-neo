Problem Statement



Dancy is developing a program for a number-crunching tool that requires finding all pairs of elements whose sum is equal to a target sum. The program should take the following inputs from the user: the size of the array, the elements of the array, and the target sum.



The program should then dynamically allocate memory to store the array of integers using the new operator. Your task is to implement a function to find all pairs of elements whose sum is equal to the target sum.

Input format :
The first line contains an integer n, the size of the array.

The second line contains n space-separated integers, representing the elements of the array.

The third line contains an integer target, the target sum for which pairs need to be found.

Output format :
For each valid pair (a, b) that adds up to the target sum, print it on a new line in the format "(a, b)".

If no pairs exist that sum to the target, print: "No pair".



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 15

1 ≤ elements ≤ 100

1 ≤ target ≤ 150

Sample test cases :
Input 1 :
10
1 2 3 4 5 6 7 8 9 10
10
Output 1 :
(1, 9)
(2, 8)
(3, 7)
(4, 6)
Input 2 :
10
1 2 3 4 5 6 7 8 9 10
100
Output 2 :
No pair
Input 3 :
5
1 5 7 -1 5
6
Output 3 :
Pairs with the sum 6 are:
Pair found: (5, 1)
Pair found: (-1, 7)
Pair found: (5, 1)

#include <iostream>
using namespace std;

void findPairs(int* arr, int n, int target) {
    bool foundPair = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                foundPair = true;
            }
        }
    }

    if (!foundPair) {
        cout << "No pair" << endl;
    }
}

int main() {
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    findPairs(arr, n, target);

    delete[] arr;

    return 0;
}
