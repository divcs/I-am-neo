#include <iostream>

using namespace std;

int main()
{
 try
 {
  double initBal;
  double withdrawAmt;

  cin >> initBal;
  cin >> withdrawAmt;

  if (withdrawAmt <= initBal)
  {
   initBal = initBal - withdrawAmt;
   cout << "Withdrawal successful." << endl;
   cout << "New balance: " << initBal << endl;
  }
  else if (withdrawAmt > initBal)
  {
   throw(withdrawAmt);
  }
 }
 catch (...)
 {
  cout << "Exception caught." << endl;
  cout << "Error: Insufficient money for withdrawal." << endl;
 }

 return 0;
}
