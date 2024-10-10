#include <iostream>
using namespace std;

int main()
{
 int choice;
 cout << "Enter 1: If you want to purchase mobile only. \n";
 cout << "Enter 2: If you want to purchase mobile with powerbank.\n";

 cout
     << "Enter your choice:";
 cin >>
     choice;

 if (choice == 1)
 {
  cout << "You have purchased mobile only.";
  cout << "Hence your discount is 5%.";
 }
 else
 {
  cout << "Your discount is 25%.";
 }
 return 0;
}