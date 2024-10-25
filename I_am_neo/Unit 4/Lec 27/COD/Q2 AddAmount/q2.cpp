#include <iostream>
using namespace std;

class AddAmountBase
{
protected:
 double amount; // Stores the current balance

public:
 // Constructor that initializes balance to 50
 AddAmountBase() : amount(50) {}

 // Constructor that adds a given amount 'a' to the balance
 AddAmountBase(double a) : amount(50 + a) {}
};

class AddAmount : public AddAmountBase
{
public:
 // Constructor that initializes balance to 50
 AddAmount() : AddAmountBase() {}

 // Constructor that adds a given amount to the balance
 AddAmount(double a) : AddAmountBase(a) {}

 // Function to print the current balance
 void print_amount()
 {
  cout << amount << endl; // Output the balance
 }
};

int main()
{
 double inputAmount; // Variable to hold user input
 cin >> inputAmount; // Read the amount to be added

 AddAmount account(inputAmount); // Create an AddAmount object with the input amount
 account.print_amount();         // Display the total amount in the piggy bank

 return 0;
}
