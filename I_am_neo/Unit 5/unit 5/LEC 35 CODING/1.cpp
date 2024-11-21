Problem Statement



Sophia is an aspiring entrepreneur who has just opened her online store. To help her customers understand the pricing of her products better, she decided to implement a program that calculates the total price of items based on their types.



She defines an abstract class Product with a pure virtual function calculateTotalPrice() that must be implemented by derived classes. The Electronics class calculates the total price after applying a discount, while the Apparel class adds tax to the base price. Sophia wants to input the price and discount for electronics, as well as the price and tax for apparel. 



For Electronics (calculating the total price after discount):

Total Price = Price - (Price × (Discount / 100))



For Apparel (calculating the total price after tax):

Total Price = Price + (Price × (Tax / 100))

Input format :
The first line contains space-separated two double values representing the price and the discount on the electronics.

The second line contains space-separated two double values, representing the price and tax on apparel (a double).

Output format :
The first line displays a double value representing the final price of the electronics after the discount, rounded off by two decimal points.

The second line displays a double value representing the final price of the apparel after tax, rounded off by two decimal points.



Refer to the sample output for the formatting specifications.

Code constraints :
0.0 ≤ price ≤ 107.0

0.0 ≤discount, tax ≤ 100.0

Sample test cases :
Input 1 :
500.00 15.00
250.00 8.5
Output 1 :
425.00
271.25
Input 2 :
2000.00 15.5
300.00 12.00
Output 2 :
1690.00
336.00

#include <iostream>
#include <iomanip>
using namespace std;

// Abstract class Product with a pure virtual function
class Product {
public:
    virtual double calculateTotalPrice() = 0;  // Pure virtual function
};

// Derived class Electronics
class Electronics : public Product {
private:
    double price;
    double discount;

public:
    // Constructor to initialize price and discount
    Electronics(double p, double d) : price(p), discount(d) {}

    // Overriding the calculateTotalPrice method
    double calculateTotalPrice() override {
        return price - (price * (discount / 100));
    }
};

// Derived class Apparel
class Apparel : public Product {
private:
    double price;
    double tax;

public:
    // Constructor to initialize price and tax
    Apparel(double p, double t) : price(p), tax(t) {}

    // Overriding the calculateTotalPrice method
    double calculateTotalPrice() override {
        return price + (price * (tax / 100));
    }
};

int main() {
    // Reading input for electronics (price and discount)
    double price_electronics, discount;
    cin >> price_electronics >> discount;

    // Reading input for apparel (price and tax)
    double price_apparel, tax;
    cin >> price_apparel >> tax;

    // Creating objects for Electronics and Apparel
    Electronics electronics(price_electronics, discount);
    Apparel apparel(price_apparel, tax);

    // Output the total prices, rounded to two decimal places
    cout << fixed << setprecision(2) << electronics.calculateTotalPrice() << endl;
    cout << fixed << setprecision(2) << apparel.calculateTotalPrice() << endl;

    return 0;
}
