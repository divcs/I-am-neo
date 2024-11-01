#include <iostream>
#include <iomanip>
using namespace std;

// Base class: Property
class Property
{
protected:
 int property_id;
 double price;
 double area;

public:
 // Parameterized Constructor
 Property(int id, double pr, double ar) : property_id(id), price(pr), area(ar) {}
};

// Derived class: ResidentialProperty
class ResidentialProperty : public Property
{
protected:
 int number_of_bedrooms;

public:
 // Parameterized Constructor
 ResidentialProperty(int id, double pr, double ar, int bedrooms)
     : Property(id, pr, ar), number_of_bedrooms(bedrooms) {}

 // Method to calculate total bedroom value
 double calculateTotalBedroomValue()
 {
  return price * (1 + (number_of_bedrooms * 0.05));
 }
};

// Further derived class: LuxuryProperty
class LuxuryProperty : public ResidentialProperty
{
private:
 double luxury_tax_rate;

public:
 // Parameterized Constructor
 LuxuryProperty(int id, double pr, double ar, int bedrooms, double tax_rate)
     : ResidentialProperty(id, pr, ar, bedrooms), luxury_tax_rate(tax_rate) {}

 // Method to calculate total price with luxury tax
 double calculateTotalPriceWithLuxuryTax()
 {
  return price * (1 + luxury_tax_rate);
 }

 // Method to calculate renovation cost
 double calculateRenovationCost()
 {
  return area * 50.0;
 }

 // Method to calculate total property value
 double calculateTotalPropertyValue()
 {
  return calculateTotalPriceWithLuxuryTax() + calculateRenovationCost();
 }

 // Method to display results
 void displayResults()
 {
  double totalBedroomValue = calculateTotalBedroomValue();
  double totalPrice = calculateTotalPriceWithLuxuryTax();
  double renovationCost = calculateRenovationCost();
  double totalPropertyValue = calculateTotalPropertyValue();

  cout << fixed << setprecision(2);
  cout << "Total Bedroom Value: " << totalBedroomValue << endl;
  cout << "Total Price: " << totalPrice << endl;
  cout << "Renovation Cost: " << renovationCost << endl;
  cout << "Total Property Value: " << totalPropertyValue << endl;
 }
};

int main()
{
 int property_id, number_of_bedrooms;
 double price, area, luxury_tax_rate;

 // Input
 cin >> property_id >> price >> area >> number_of_bedrooms >> luxury_tax_rate;

 // Create LuxuryProperty object and display results
 LuxuryProperty property(property_id, price, area, number_of_bedrooms, luxury_tax_rate);
 property.displayResults();

 return 0;
}
