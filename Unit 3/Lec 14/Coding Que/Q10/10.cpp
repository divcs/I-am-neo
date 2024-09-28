/*
Manu is designing a class called Demo to represent data objects with two private integer variables, n1 and n2. The class should include a constructor to initialize these variables, a display method to print their values, and a destructor that indicates when the object is destroyed. The program should read two integers from the user, create a Demo object with those values, and display them.

Input format :
The input consists of the numbers to be assigned to n1 and n2, respectively, separated by a space.

Output format :
The first line displays the message "Inside Constructor".

The next two lines display n1 and n2 on separate lines.

The last line displays the message "Inside Destructor".



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0 ≤ n1, n2 ≤ 103

Sample test cases :
Input 1 :
4 5
Output 1 :
Inside Constructor
4
5
Inside Destructor
Input 2 :
19 99
Output 2 :
Inside Constructor
19
99
Inside Destructor
*/

#include <iostream>
using namespace std;

class Demo
{
private:
 int n1, n2; // Private member variables

public:
 // Constructor to initialize n1 and n2
 Demo(int a, int b) : n1(a), n2(b)
 {
  cout << "Inside Constructor" << endl;
 }

 // Method to display the values of n1 and n2
 void display() const
 {
  cout << n1 << endl;
  cout << n2 << endl;
 }

 // Destructor to indicate object destruction
 ~Demo()
 {
  cout << "Inside Destructor" << endl;
 }
};

int main()
{
 int num1, num2;

 // Input two integers
 cin >> num1 >> num2;

 // Create a Demo object with the input values
 Demo obj(num1, num2);

 // Display the values of n1 and n2
 obj.display();

 // The destructor will be called automatically when obj goes out of scope
 return 0;
}
