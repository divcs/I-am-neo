Single File Programming Question
Problem Statement



Nila is organizing a local community event, and she has received a list of names from people who registered online. Since the number of registrants can vary, Nila wants to dynamically allocate memory to store the names rather than using a fixed array size. Once the names are entered, Nila needs to sort them in alphabetical order to better manage the registrations.



Your task is to help Nila by writing a program that first allocates memory dynamically for the names, sorts them alphabetically, and then displays the sorted list of names.

Input format :
The first line contains an integer n, representing the number of names Nila needs to sort.

The next n lines contain one name each (a string), representing the names of the people who registered.

Output format :
The output prints the sorted list of names in alphabetical order, separated by spaces.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 25

1 ≤ length of each student name ≤ 15

Sample test cases :
Input 1 :
5
Sharma
Dev
Ankit
Samir
Robert
Output 1 :
Ankit Dev Robert Samir Sharma 

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Dynamically allocate memory for an array of strings
    string* names = new string[n];

    // Reading names
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    // Sorting the names alphabetically
    sort(names, names + n);

    // Printing the sorted names
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Deallocating the memory
    delete[] names;

    return 0;
}
