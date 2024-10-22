#include <iostream>
using namespace std;

void decryptMessage(int* arr, int N) {
    for (int i = 0; i < N; i++) {
        cout << (char)*(arr + i); // Convert ASCII value to character using pointers
    }
    cout << endl;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Number of elements in the array
        cin >> N;
        int arr[N]; // Array to store ASCII values

        for (int i = 0; i < N; i++) {
            cin >> arr[i]; // Input ASCII values
        }

        decryptMessage(arr, N); // Call function to decrypt and print the message
    }

    return 0;
}
