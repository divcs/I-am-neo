#include <iostream>
using namespace std;

int main()
{
 int arr[5] = {1, 2, 3, 4, 5};
 char ch[6] = "abcde"; // last index stores the null character in character arrays

 // cout function is differently implemented for integer and character arrays
 cout << "Address of integer array: " << arr << endl;  // prints the address of integer array
 cout << "Content of character array: " << ch << endl; // prints the value of character array

 char *c = &ch[0];
 cout << "Value of char array through pointer: " << c << endl; // prints the address of character array, stops printing when null character is found

 // when null character is not found, prints content's until null character is found
 char temp = 'z';
 char *p = &temp;
 cout << "Null character when not found:" << p << endl;

 // difference between
 char ch[6] = "abcde"; // can do
 char *c = "abcde";    // risky, not acceptable

 return 0;
}