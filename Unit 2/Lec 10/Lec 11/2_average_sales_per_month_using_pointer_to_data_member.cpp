#include <iostream>
#include <string>
using namespace std;
int main()
{
 string name;
 getline(cin, name);
 int numMonths;
 cin >> numMonths;
 int sales[10];
 int totalSales = 0;

 for (int i = 0; i < numMonths; i++)
 {
  cin >> sales[i];
  totalSales += sales[i];
 }
 int averageSales = totalSales / numMonths;

 cout << "Salesperson details: " << endl;
 cout << "Name : " << name << endl;
 cout << "Total Sales: " << totalSales << endl;
 cout << "Average Sales: " << averageSales << endl;

 return 0;
}