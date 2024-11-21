Problem Statement



Gowtham, a computer science student, is exploring object-oriented programming. He created a base class called Demo with two integer attributes, num1, and num2, along with a virtual method display. To enhance functionality, he derived a class called Derived that overrides the display method to present the values with additional context.



Gowtham's program takes two integer inputs, dynamically allocates an object of the Derived class, and displays the numbers. After displaying, the program deletes the object to ensure proper cleanup and destructor calls.



Your task is to implement this program according to Gowtham's design and demonstrate the output with two integer inputs.

Input format :
The input consists of space-separated integers num1 and num2.

Output format :
The output consists of several lines displaying the construction and destruction of objects, followed by the values of num1 and num2 from the derived class:

"Inside Demo Constructor"

"Inside Derived Constructor"

"Derived - Number 1: n1" (where n1 is the first integer input)

"Derived - Number 2: n2" (where n2 is the second integer input)

"Inside Derived Destructor"

"Inside Demo Destructor"



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n1, n2 ≤ 2000

Sample test cases :
Input 1 :
10 20
Output 1 :
Inside Demo Constructor
Inside Derived Constructor
Derived - Number 1: 10
Derived - Number 2: 20
Inside Derived Destructor
Inside Demo Destructor

#include <iostream>
using namespace std;

class Demo {
private:
    int num1, num2;

public:
    // Constructor to initialize num1 and num2
    Demo(int n1, int n2) {
        num1 = n1;
        num2 = n2;
        cout << "Inside Demo Constructor" << endl;
    }

    // Virtual Destructor
    virtual ~Demo() {
        cout << "Inside Demo Destructor" << endl;
    }

    // Getter methods to access private variables
    int getNum1() const {
        return num1;
    }

    int getNum2() const {
        return num2;
    }

    // Virtual display method
    virtual void display() {
        // Base class display method can be left empty
    }
};

class Derived : public Demo {
public:
    // Constructor
    Derived(int n1, int n2) : Demo(n1, n2) {
        cout << "Inside Derived Constructor" << endl;
    }

    // Destructor
    ~Derived() {
        cout << "Inside Derived Destructor" << endl;
    }

    // Overriding display method
    void display() override {
        cout << "Derived - Number 1: " << getNum1() << endl;  // Use getter methods
        cout << "Derived - Number 2: " << getNum2() << endl;  // Use getter methods
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    // Dynamically allocate memory for Derived class object
    Demo* obj = new Derived(n1, n2);

    // Call display method
    obj->display();

    // Delete the dynamically allocated object
    delete obj;

    return 0;
}
