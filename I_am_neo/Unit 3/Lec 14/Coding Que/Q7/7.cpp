
/*Ravi is creating a program for sales calculation that takes an item cost and a tax rate as inputs, where the class Sale uses a constructor with default arguments (default tax rate of 0.05). The program should calculate and display the sales tax and total cost for both the default tax rate and a user-entered custom tax rate.



Formula:

Sales Tax Amount = Item cost * Tax rate
Total Amount = Item cost + Sales tax amount
Input format :
The first line consists of a tax rate as a double value.

The second line consists of the cost of the item as a double value.

Output format :
The output will display the sales tax and total cost for both the default and custom tax rates.

The sales tax amount is displayed as a double value rounded to two decimal places.

The total value of the sale is displayed as a double value rounded to two decimal places.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0.01 ≤ custom tax rate ≤ 0.00

1 ≤ cost item ≤ 105



Sample test cases :
Input 1 :
0.65
1000.0
Output 1 :
Amount (default tax rate): 50.00
Total: 1050.00
Amount (custom tax rate): 650.00
Total: 1650.00
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Sale
{
private:
 double taxRate;

public:
 // Constructor with default argument
 Sale(double rate = 0.05) : taxRate(rate) {}

 // Method to calculate and return sales tax
 double calculateSalesTax(double itemCost) const
 {
  return itemCost * taxRate;
 }

 // Method to calculate and return total cost
 double calculateTotalCost(double itemCost) const
 {
  return itemCost + calculateSalesTax(itemCost);
 }
};

int main()
{
 double customTaxRate, itemCost;

 // Input custom tax rate and item cost
 cin >> customTaxRate >> itemCost;

 // Create Sale objects for default and custom tax rates
 Sale defaultSale;
 Sale customSale(customTaxRate);

 // Calculate and display for default tax rate
 cout << fixed << setprecision(2);
 cout << "Amount (default tax rate): "
      << defaultSale.calculateSalesTax(itemCost)
      << " Total: "
      << defaultSale.calculateTotalCost(itemCost)
      << endl;

 // Calculate and display for custom tax rate
 cout << "Amount (custom tax rate): "
      << customSale.calculateSalesTax(itemCost)
      << " Total: "
      << customSale.calculateTotalCost(itemCost)
      << endl;

 return 0;
}
