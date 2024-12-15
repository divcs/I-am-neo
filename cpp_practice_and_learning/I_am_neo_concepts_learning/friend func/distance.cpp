#include <iostream>
using namespace std;

class Distance
{
private:
 int meters;

public:
 Distance(int m) : meters(m) {}

 // Declare friend function to access private data
 friend Distance operator+(int value, const Distance &d);
 void display()
 {
  cout << meters;
 }
};

// Friend function defined outside the class
Distance operator+(int value, const Distance &d)
{
 return Distance(value + d.meters);
}

int main()
{
 Distance d1(50);
 Distance d2 = 30 + d1; // Calls the friend function
 cout << "D1's distance: ";
 d1.display();
 cout << endl;
 cout << "D2's Distance: ";
 d2.display();

 return 0;
}
