// 2 test case fails
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ItemDetails
{
public:
 string itemName;
 int itemNo;
 double itemPrice;

 void setItemDetails(string name, int no, double price)
 {
  itemName = name;
  itemNo = no;
  itemPrice = price;
 }
 void displayItemDetails()
 {
  cout << "1. Item Name: " << itemName << endl;
  cout << "2. Item No.: " << itemNo << endl;
  cout << "3. Item Price: " << fixed << setprecision(1) << itemPrice << endl;
 }
};

class DiscountDetails
{
public:
 int discountPercent;

 void setDiscountDetails(int discount)
 {
  discountPercent = discount;
 }
 double calculateDiscountedPrice(double price)
 {
  return price * (1 - discountPercent / 100.0);
 }

 void displayDiscountDetails(double discountedPrice)
 {
  cout << "4. Discount Percent: " << discountPercent << endl;
  cout << "5. Discounted Price: " << fixed << setprecision(1) << discountedPrice << endl;
 }
};

class DiscountedItem : public ItemDetails, public DiscountDetails
{
public:
 double discountedPrice;

 void calculateDiscountedPrice()
 {
  discountedPrice = itemPrice * (1 - discountPercent / 100.0);
 }

 void displayDetails()
 {
  displayItemDetails();
  displayDiscountDetails(discountedPrice);
 }
};

int main()
{
 int N;
 cin >> N;
 DiscountedItem items[N];
 double totalPrice = 0.0, totalDiscount = 0.0;

 for (int i = 0; i < N; ++i)
 {
  cin.ignore(); // To clear the input buffer
  string name;
  int no, discount;
  double price;

  getline(cin, name); // Using getline for item name
  cin >> no;
  cin >> price;
  cin >> discount;

  items[i].setItemDetails(name, no, price);
  items[i].setDiscountDetails(discount);
  items[i].calculateDiscountedPrice();

  totalPrice += price;
  totalDiscount += (price - items[i].discountedPrice);
 }

 for (int i = 0; i < N; ++i)
 {
  if (i > 0)
  {
   cout << endl; // Print a newline before all items except the first one
  }
  cout << "Details of item " << i + 1 << " :\n";
  items[i].displayDetails();
 }

 cout << "\nTotal Price: " << fixed << setprecision(1) << totalPrice << endl;
 cout << "Total Discount: " << fixed << setprecision(1) << totalDiscount << endl;

 return 0;
}
