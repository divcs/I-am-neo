#include <iostream>
using namespace std;

int main()
{
 float balance_amount;
 float interest;

 cout << "Enter balance amount: ";
 cin >> balance_amount;

 if (balance_amount < 2000)
 {
  cout << "Your balance amount is: " << balance_amount;
 }
 else if (balance_amount < 3000 && balance_amount > 2000)
 {
  interest = 0.05;
  balance_amount = balance_amount + balance_amount * interest;
  cout << "Your balance amount is: " << balance_amount;
 }
 else if (balance_amount < 4000)
 {
  interest = 0.07;
  balance_amount = balance_amount + balance_amount * interest;
  cout << "Your balance amount is: " << balance_amount;
 }
 else if (balance_amount < 5000)
 {
  interest = 0.08;
  balance_amount = balance_amount + balance_amount * interest;
  cout << "Your balance amount is: " << balance_amount;
 }
 else if (balance_amount < 10000)
 {
  interest = 0.1;
  balance_amount = balance_amount + balance_amount * interest;
  cout << "Your balance amount is: " << balance_amount;
 }

 return 0;
}