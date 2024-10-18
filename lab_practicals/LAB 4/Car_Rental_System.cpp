#include <iostream>
#include <string>
using namespace std;

class Car
{
 int license_num;
 string brand;
 string model;

public:
 Car(int ln, string b, string m)
 {
  license_num = ln;
  brand = b;
  model = m;
 }
 // void display(){
 //  cout << "License Number: " << license_num << endl;
 //  cout << "Brand: " << brand << endl;
 //  cout << "Model: " << model << endl;
 // }

 ~Car()
 {
  cout << "Car object has been destroyed." << license_num << endl;
 }
};
int main()
{
 int ln;
 string br, mo;

 cout << "Enter license number: ";
 cin >> ln;
 cout << "Enter brand: ";
 cin >> br;
 cout << "Enter model: ";
 cin >> mo;

 Car c(ln, br, mo);
 

 return 0;
}