#include <iostream>
using namespace std;

class Stock
{
private:
 int buyingPrice;
 int sellingPrice;

public:
 // Constructor to initialize buying and selling prices
 Stock(int buyPrice, int sellPrice) : buyingPrice(buyPrice), sellingPrice(sellPrice) {}

 // Overloaded subtraction operator to calculate profit or loss
 int operator-()
 {
  return sellingPrice - buyingPrice; // Profit/Loss
 }

 // Overloaded addition operator to calculate total price
 int operator+()
 {
  return buyingPrice + sellingPrice; // Total Price
 }

 // Function to display profit/loss and total price
 void displayTransaction()
 {
  int profitOrLoss = -(*this); // Calculate profit/loss
  int totalPrice = +(*this);   // Calculate total price

  if (profitOrLoss > 0)
  {
   cout << "Profit: " << profitOrLoss << endl;
   if (profitOrLoss > 0.2 * buyingPrice)
   {
    cout << "High Profit" << endl; // Check for high profit
   }
  }
  else
  {
   cout << "Loss: " << profitOrLoss << endl;
  }

  cout << "Total Price: " << totalPrice << endl; // Display total price
 }
};

int main()
{
 int buyPrice, sellPrice;
 cin >> buyPrice >> sellPrice; // Input buying and selling prices

 Stock stock(buyPrice, sellPrice);
 stock.displayTransaction(); // Display the transaction details

 return 0;
}
