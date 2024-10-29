#include <iostream>
using namespace std;

class Distance
{
private:
 int feet;
 int inches;

public:
 Distance()
 {
  feet = 0;
  inches = 0;
 }

 Distance(int f, int i)
 {
  feet = f;
  inches = i;
 }
 Distance add(const Distance &other) const
 {
  int totalfeet = feet + other.feet;
  int totalinches = inches + other.inches;

  return Distance(totalfeet, totalinches);
 }

 void display() const
 {
  std::cout << feet << " ' " << inches << endl;
 }
};

int main()
{
 int f1, f2, i1, i2;

 cin >> f1 >> i1;
 Distance d1(f1, i1);
 cin >> f2 >> i2;
 Distance d2(f2, i2);

 Distance sum = d1.add(d2);

 sum.display();
 return 0;
}