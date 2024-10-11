#include <iostream>
using namespace std;

class BankAccount
{
public:
 int accNum;
 string accHoldName;
 float balance;

public:
 BankAccount()
 {
  cout << "Enter account number:";
  cin >> accNum;

  cout << "Enter account holder name:";
  // getline(cin, accHoldName);
  cin >> accHoldName;

  cout << "Enter balance amount:";
  cin >> balance;
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
 float depositAmt, withdrawAmt;
 BankAccount bankAcc;
 cout << "Enter the amount you want to deposit: ";
 cin >> depositAmt;
 bankAcc.depositAmount(depositAmt);
 bankAcc.currentBalance();

 cout << "Enter the amount you want to withdraw: ";
 cin >> withdrawAmt;
 bankAcc.withdrawAmount(withdrawAmt);
 bankAcc.currentBalance();

 return 0;
}