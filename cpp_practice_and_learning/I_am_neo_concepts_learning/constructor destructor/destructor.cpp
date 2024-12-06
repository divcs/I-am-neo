#include <iostream>
using namespace std;

class Demo
{
 int id;           // Identifier for the object
 static int count; // Static count to assign unique IDs

public:
 // Constructor
 Demo()
 {
  id = ++count; // Assign a unique ID to each object
  cout << "Constructor called for object ID: " << id << endl;
 }

 // Destructor
 ~Demo()
 {
  cout << "Destructor called for object ID: " << id << endl;
 }
};

// Initialize the static variable
int Demo::count = 0;

int main()
{
 Demo obj1; // Constructor is called here for obj1 (ID: 1)
 {
  Demo obj2; // Constructor is called here for obj2 (ID: 2)
 } // Destructor is called for obj2 as it goes out of scope

 cout << "End of program." << endl;
 return 0; // Destructor is called for obj1 here
}
