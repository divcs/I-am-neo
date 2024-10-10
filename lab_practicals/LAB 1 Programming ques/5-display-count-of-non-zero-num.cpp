#include <iostream>
using namespace std;

void displayNonZeroNum()
{
 int count = 0;
 int num;

 do
 {
  cout << "Enter a number:" << endl;
  cin >> num;

  if (num != 0)
  {
   count++;
  }
 } while (num != 0);

 cout << "The count of non-zero numbers entered is: " << count;
}

int main()
{
 displayNonZeroNum();
 return 0;
}
