#include <iostream>
#include <iomanip>
using namespace std;

// Base class: Product
class Product
{
protected:
 int product_id;
 double price;

public:
 // Parameterized Constructor
 Product(int id, double pr) : product_id(id), price(pr) {}
};

// Derived class: ElectronicItem
class ElectronicItem : public Product
{
 int warranty_period;

public:
 // Parameterized Constructor
 ElectronicItem(int id, double pr, int warranty)
     : Product(id, pr), warranty_period(warranty) {}

 // Method to calculate price after discount
 double calculateDiscountedPrice()
 {
  return price - (price * 0.10);
 }

 // Method to calculate price with tax
 double calculatePriceWithTax()
 {
  return price + (price * 0.08);
 }

 // Method to calculate total cost for given quantity
 double calculateTotalCost(int quantity)
 {
  return price * quantity;
 }

 // Method to display results
 void displayResults(int quantity)
 {
  cout << fixed << setprecision(2);
  cout << "Price: " << calculateDiscountedPrice() << endl;
  cout << "Price With Tax: " << calculatePriceWithTax() << endl;
  cout << "Total Cost: " << calculateTotalCost(quantity) << endl;
 }
};

int main()
{
 int product_id, warranty_period, quantity;
 double price;

 // Input
 cin >> product_id >> price >> warranty_period >> quantity;

 // Create ElectronicItem object and display results
 ElectronicItem item(product_id, price, warranty_period);
 item.displayResults(quantity);

 return 0;
}
