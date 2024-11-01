#include <iostream>
#include <iomanip>
using namespace std;

// Base class: Property
class Property {
protected:
    int locationCode;
    double price;
    double area;

public:
    // Parameterized Constructor
    Property(int locCode, double pr, double ar) : locationCode(locCode), price(pr), area(ar) {}
};

// Derived class: House
class House : public Property {
    int number_of_bedrooms;

public:
    // Parameterized Constructor
    House(int locCode, double pr, double ar, int numBedrooms) 
        : Property(locCode, pr, ar), number_of_bedrooms(numBedrooms) {}

    // Method to calculate total bedroom area
    double calculateBedroomArea() {
        return number_of_bedrooms * 200.0;
    }

    // Method to calculate discounted price
    double calculateDiscountedPrice() {
        return price - (price * 0.10);
    }

    // Method to calculate cost to paint the house
    double calculatePaintCost() {
        return area * 5.0;
    }

    // Method to display results
    void displayResults() {
        cout << fixed << setprecision(2);
        cout << "Total Bedroom Area: " << calculateBedroomArea() << endl;
        cout << "Discount Price: " << calculateDiscountedPrice() << endl;
        cout << "Cost to Paint House: " << calculatePaintCost() << endl;
    }
};

int main() {
    int locationCode, number_of_bedrooms;
    double price, area;

    // Input
    cin >> locationCode >> price >> area >> number_of_bedrooms;

    // Create House object and display results
    House house(locationCode, price, area, number_of_bedrooms);
    house.displayResults();

    return 0;
}
