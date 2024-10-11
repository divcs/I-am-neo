#include <iostream>
#include <stdio.h>
using namespace std;

class BankAccount
{
public:
 int accNum;
 string accHoldName;
 float balance;

 BankAccount()
 {
  cout << "-------------------" << endl;
  cout << "Enter your details here - " << endl;
  cout << "Enter account number: ";
  cin >> accNum;
  cout << "Enter account holder name: ";
  cin >> accHoldName;
  cout << "Enter balance amount: ";
  cin >> balance;
  cout << "-------------------" << endl;
 }

 float depositAmount(int depositAmount)
 {
  balance += depositAmount;
  return balance;
 }

 float withdrawAmount(int withdrawAmount)
 {
  if (withdrawAmount > balance)
  {
   cout << "Cannot be withdrawn! Insufficient balance." << endl;
  }
  else
  {
   balance -= withdrawAmount;
  }
  return balance;
 }

 void currentBalance() const
 {
  cout << "Now your current balance amount is: " << balance << endl;
 }
};

int choiceSelection()
{
 int choice;
 cout << "What do you want to do ?" << endl;
 cout << "-------------------" << endl;
 cout << "1. Deposit Money" << endl;
 cout << "2. Withdraw Money" << endl;
 cout << "3. Display Current Balance" << endl;
 cout << "Your choice is: ";
 cin >> choice;
 cout << "-------------------" << endl;
 return choice;
}

bool returnToMenu()
{
 char yn;
 cout << "Do you want to go back to menu? (y/n): ";
 cin >> yn;
 return yn == 'y' || yn == 'Y';
}

int main()
{
 BankAccount bankAcc;
 int choice, amount;

 do
 {
  choice = choiceSelection();

  switch (choice)
  {
  case 1:
   cout << "Enter the amount to deposit: ";
   cin >> amount;
   bankAcc.depositAmount(amount);
   bankAcc.currentBalance();
   break;
  case 2:
   cout << "Enter the amount to withdraw: ";
   cin >> amount;
   bankAcc.withdrawAmount(amount);
   bankAcc.currentBalance();
   break;
  case 3:
   bankAcc.currentBalance();
   break;
  default:
   cout << "Invalid choice, please try again." << endl;
   break;
  }
 } while (returnToMenu());

 cout << "Exiting the program..." << endl;
 return 0;
}
