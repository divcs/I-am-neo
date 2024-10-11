#include <iostream>
using namespace std;

int choice;

int choiceSelection()
{
 cout << "What do you want to do ?" << endl;

 cout << "-------------------" << endl;
 cout << "1. Deposit Money" << endl;
 cout << "2. Withdraw Money" << endl;
 cout << "3. Display Current Balance " << endl;

 cout << "Your choice is: ";
 cin >> choice;
 cout << "-------------------" << endl;

 return choice;
}

class BankAccount
{
public:
 int accNum;
 string accHoldName;
 float balance;

public:
 BankAccount()
 {
  cout << "-------------------" << endl;
  cout << "Enter your details here - " << endl;

  cout << "Enter account number:";
  cin >> accNum;

  cout << "Enter account holder name:";
  // getline(cin, accHoldName);
  cin >> accHoldName;

  cout << "Enter balance amount:";
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

 void currentBalance()
 {
  cout << "Now your current balance amount is: " << balance;
 }
};

int main()
{
 BankAccount bankAcc;
 int depositAmt, withdrawAmt, currentBalance;

 choiceSelection();
 switch (choice)
 {
 case 1:
  cout << "Enter the amount of money you want to deposit? ";
  cin >> depositAmt;
  bankAcc.depositAmount(depositAmt);
  bankAcc.currentBalance();

  break;

 case 2:
  cout << "Enter the amount of money you want to withdraw? ";
  cin >> withdrawAmt;
  bankAcc.withdrawAmount(withdrawAmt);
  bankAcc.currentBalance();
  break;

 case 3:
  bankAcc.currentBalance();
  break;

 default:
  cout << "Invalid choice" << endl;
  cout << "Taking back to Menu.....";
  choiceSelection();
  break;
 }
 return 0;
}