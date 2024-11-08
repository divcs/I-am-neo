#include <iostream>
#include <iomanip>
using namespace std;
class Sales
{
 double cost;
 double taxRate;

public:
 Sales(double taxrate = 0.05) : taxRate(taxrate) {}

 double salesTax(double cost)
 {
  return cost * taxRate;
 }

 double totalCost(double cost)
 {
  return cost + salesTax(cost);
 }
};
int main()
{
 double customTaxRate, cost;
 cin >> customTaxRate >> cost;

 Sales saleDefault;
 Sales customSale(customTaxRate);

 cout << fixed << setprecision(2);
 cout << "Amount (default tax rate): " << saleDefault.salesTax(cost);
 cout << "Total: " << saleDefault.totalCost(cost);

 cout << "Amount (custom tax rate): " << customSale.salesTax(cost);
 cout << "Total: " << customSale.totalCost(cost);

 return 0;
}
