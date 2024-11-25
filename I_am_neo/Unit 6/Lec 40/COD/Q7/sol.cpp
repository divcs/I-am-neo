// You are using GCC
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class products
{
public:
 string name;
 int quantity;
 double price;

 products(string n, int qty, double p) : name(n), quantity(qty), price(p) {}
};

void dispalyInventory(const vector<products> &inventory)
{
 cout << "inventory details: " << endl;
 for (const auto &products : inventory)
 {
  cout << "name: " << products.name << " ,quantity: " << products.quantity << " , price: $" << products.price << endl;
 }
}

int main()
{
 vector<products> inventor;
 int ch;
 while (true)
 {

  cin >> ch;
  if (ch == 1)
  {
   string name;
   int quantity;
   double price;
   cin >> name >> quantity >> price;

   inventor.push_back(products(name, quantity, price));
  }
  else if (ch == 2)
  {
   string name;
   int quantity;
   cin >> name >> quantity;
   bool found = false;
   for (auto &products : inventor)
   {
    if (products.name == name)
    {
     products.quantity = quantity;
     found = true;

     break;
    }
   }
   if (!found)
   {
    cout << "product not found in inventory." << endl;
   }
  }

  else if (ch == 3)
  {
   dispalyInventory(inventor);
  }
  else if (ch == 4)
  {

   break;
  }
  else
  {
   cout << "invalid choice" << endl;
   break;
  }
 }
 return 0;
}