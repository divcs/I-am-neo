#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt"); // Create and open a file for writing
    if (!outFile) {
        cout << "File could not be opened!" << endl;
        return 1;
    }

    outFile << "Hello, file handling in C++!" << endl;
    outFile << "This is a test file." << endl;

    outFile.close(); // Close the file
    cout << "Data written to file successfully." << endl;
    return 0;
}
