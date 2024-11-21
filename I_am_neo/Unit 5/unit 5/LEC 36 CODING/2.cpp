Single File Programming Question
Problem Statement



Emily is an ice cream shop owner who wants to calculate the volume of different ice cream shapes to manage her inventory better. She decides to create a class hierarchy to represent various ice cream shapes, where the base class is Icecream.



This class has a pure virtual function named Quantity, which will be overridden in derived classes to compute the volume of the respective shapes. Emily uses late binding to ensure that the correct method is called at runtime based on the user’s choice of ice cream shape.



Note: 

Sphere Ice Cream Volume = (4/3) * pi * r³

Cone Ice Cream Volume = (1/3) * pi * r² * h

Use M_PI for pi and use late binding.

Input format :
The input consists of an integer choice indicating the type of ice cream shape:

for a spherical ice cream.
for a conical ice cream.
If the choice is 1, an integer r (radius) is provided.

If the choice is 2, two space-separated integers r (radius) and h (height) are provided.



Note: The input type should be an integer.

Output format :
The output should be the volume of the selected ice cream shape, rounded to two decimal points.

If the input choice is invalid, the output should be: Invalid choice



Refer to the sample output for the formatting specifications.

Code constraints :
0 ≤ r, h ≤ 1000

Sample test cases :
Input 1 :
1
4
Output 1 :
268.08
Input 2 :
2
4 5
Output 2 :
83.78
Input 3 :
4
Output 3 :
Invalid choice

#include <iostream>
#include <cmath>    // for M_PI
#include <iomanip>  // for setting precision

using namespace std;

// Abstract base class Icecream with a pure virtual function Quantity
class Icecream {
public:
    virtual double Quantity() = 0;  // Pure virtual function to calculate volume
};

// Derived class SphereIcecream to calculate volume of spherical ice cream
class SphereIcecream : public Icecream {
    int r;  // radius of the sphere
public:
    SphereIcecream(int radius) : r(radius) {}
    
    double Quantity() override {
        return (4.0 / 3.0) * M_PI * pow(r, 3);  // Volume formula for sphere
    }
};

// Derived class ConeIcecream to calculate volume of conical ice cream
class ConeIcecream : public Icecream {
    int r, h;  // radius and height of the cone
public:
    ConeIcecream(int radius, int height) : r(radius), h(height) {}
    
    double Quantity() override {
        return (1.0 / 3.0) * M_PI * pow(r, 2) * h;  // Volume formula for cone
    }
};

int main() {
    int choice;
    cin >> choice;
    
    if (choice == 1) {
        int r;
        cin >> r;
        SphereIcecream sphere(r);
        cout << fixed << setprecision(2) << sphere.Quantity() << endl;
    }
    else if (choice == 2) {
        int r, h;
        cin >> r >> h;
        ConeIcecream cone(r, h);
        cout << fixed << setprecision(2) << cone.Quantity() << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }
    
    return 0;  // Return from main
}
