#include <iostream>
using namespace std;

int carBuy(double budget)
{
 double marutiPrice = 600000;
 double fordPrice = 700000;
 double hundaiPrice = 800000;

 double marutiDiscount = 0.12;
 double fordDiscount = 0.13;
 double hundaiDiscount = 0.14;

 // Correctly apply the discount by subtracting it from the original price
 double marutiFinalPrice = marutiPrice - (marutiPrice * marutiDiscount);
 double fordFinalPrice = fordPrice - (fordPrice * fordDiscount);
 double hundaiFinalPrice = hundaiPrice - (hundaiPrice * hundaiDiscount);

 // Determine the best car to suggest
 if (hundaiFinalPrice <= budget)
 {
  cout << "Suggested Car: Hundai. You can buy Hundai Car" << endl;
 }
 else if (fordFinalPrice <= budget)
 {
  cout << "Suggested Car: Ford. You can buy Ford Car" << endl;
 }
 else if (marutiFinalPrice <= budget)
 {
  cout << "Suggested Car: Maruti. You can buy Maruti Car" << endl;
 }
 else
 {
  cout << "No car fits your budget!" << endl;
  cout << "The prices of the cars are: " << endl;
  cout << "Maruti - " << marutiFinalPrice << endl;
  cout << "Ford - " << fordFinalPrice << endl;
  cout << "Hundai - " << hundaiFinalPrice << endl;
 }
 return 0;
}

int main()
{
 double budget;

 cout << "Enter your budget: ";
 cin >> budget;

 carBuy(budget);

 return 0;
}
