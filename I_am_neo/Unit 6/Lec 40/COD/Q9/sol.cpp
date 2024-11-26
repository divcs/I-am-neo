#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>

class ShoppingCart
{
private:
 struct Item
 {
  int quantity;
  double price;
 };
 std::unordered_map<std::string, Item> cart;

public:
 void addItem(const std::string &name, int quantity, double price)
 {
  if (cart.find(name) != cart.end())
  {
   cart[name].quantity += quantity;
  }
  else
  {
   cart[name] = {quantity, price};
  }
 }

 void updateQuantity(const std::string &name, int quantity)
 {
  if (cart.find(name) != cart.end())
  {
   cart[name].quantity = quantity;
  }
 }

 double viewTotalBill() const
 {
  double total = 0.0;
  for (const auto &[name, item] : cart)
  {
   total += item.quantity * item.price;
  }
  return total;
 }
};

int main()
{
 ShoppingCart cart;
 int choice;

 while (true)
 {
  std::cin >> choice;

  if (choice == 1)
  {
   std::string name;
   int quantity;
   double price;
   std::cin >> name >> quantity >> price;
   cart.addItem(name, quantity, price);
  }
  else if (choice == 2)
  {
   std::string name;
   int quantity;
   std::cin >> name >> quantity;
   cart.updateQuantity(name, quantity);
  }
  else if (choice == 3)
  {
   double total = cart.viewTotalBill();
   std::cout << "Total Bill: " << std::fixed << std::setprecision(0) << total << "\n";
  }
  else if (choice == 4)
  {
   std::cout << "Exiting the program.\n";
   break;
  }
  else
  {
   std::cout << "Invalid choice\n";
  }
 }

 return 0;
}
