#include <iostream>
using namespace std;

int main()
{
 int num, fact = 1;
 cout << "Enter the number:";
 cin >> num;

 for (int i = 1; i <= num; i++)
 {
  fact = i * fact;
 }

 cout << "Factorial of " << num << " is " << fact;

 return 0;
}