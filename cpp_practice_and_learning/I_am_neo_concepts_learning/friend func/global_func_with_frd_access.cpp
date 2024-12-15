// a global function might need to calculate interest for an account, requiring access to the account's private balance.

#include <iostream>
using namespace std;

class BankAccount
{
private:
 double balance;

public:
 BankAccount(double b) : balance(b) {}

 // Friend function declaration
 friend double calculateInterest(const BankAccount &account, double rate);

 // Method to display balance
 void displayBalance() const
 {
  cout << "Balance: $" << balance << endl;
 }
};

// Friend function to calculate interest
double calculateInterest(const BankAccount &account, double rate)
{
 return account.balance * (rate / 100);
}

int main()
{
 BankAccount account(1000); // Create account with $1000 balance

 account.displayBalance();

 double interest = calculateInterest(account, 5); // 5% interest
 cout << "Interest (5%): $" << interest << endl;

 return 0;
}
