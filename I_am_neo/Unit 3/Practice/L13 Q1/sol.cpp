#include <iostream>
using namespace std;

class UserCallsObj
{
public:
 UserCallsObj()
 {
  cout << "Constructor called" << endl;
 }
 ~UserCallsObj()
 {
  cout << "Destructor called" << endl;
 }
};
int main()
{
 int n;
 // int arr[n];
 cout << "Enter the number of objects to create: ";
 cin >> n;

 UserCallsObj *array = new UserCallsObj[n];
 delete[] array;
 return 0;
}