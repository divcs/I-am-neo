#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
 // Virtual function to allow overriding
 virtual void sound()
 {
  cout << "Animal makes a sound" << endl;
 }
 ~Animal()
 {
  cout << "Base class destructor" << endl;
 }
};

// Derived class
class Dog : public Animal
{
public:
 // Overriding the sound() function
 void sound() override
 {
  cout << "Dog barks" << endl;
 }
 ~Dog()
 {
  cout << "Dog class destructor" << endl;
 }
};

// Derived class
class Cat : public Animal
{
public:
 // Overriding the sound() function
 void sound() override
 {
  cout << "Cat meows" << endl;
 }
 ~Cat()
 {
  cout << "Cat class destructor" << endl;
 }
};

int main()
{
 // Base class pointer to base class object
 Animal *animal1 = new Animal();
 animal1->sound(); // Calls the base class version

 // Base class pointer to derived class object (Dog)
 Animal *animal2 = new Dog();
 animal2->sound(); // Calls the derived class version (Dog::sound)

 // Base class pointer to derived class object (Cat)
 Animal *animal3 = new Cat();
 animal3->sound(); // Calls the derived class version (Cat::sound)

 delete animal1;
 delete animal2;
 delete animal3;

 return 0;
}
