#include <iostream>
using namespace std;

class Person
{
private:
 int age;

public:
 // Constructor to initialize the age
 Person(int a) : age(a) {}

 // Overload the '==' operator to compare the ages of two persons
 bool operator==(const Person &other) const
 {
  return age == other.age;
 }
};

int main()
{
 int age1, age2, age3;

 // Reading the ages of the three persons
 cin >> age1 >> age2 >> age3;

 // Creating instances of Person with the given ages
 Person person1(age1);
 Person person2(age2);
 Person person3(age3);

 // Comparing person1 with person2 and person3 using the overloaded '==' operator
 if (person1 == person2)
 {
  cout << "Person 1 is the same age as Person 2." << endl;
 }
 else
 {
  cout << "Person 1 is not the same age as Person 2." << endl;
 }

 if (person1 == person3)
 {
  cout << "Person 1 is the same age as Person 3." << endl;
 }
 else
 {
  cout << "Person 1 is not the same age as Person 3." << endl;
 }

 return 0;
}
