#include <iostream>
using namespace std;

class Temp
{
public:
 Temp()
 {
  cout << "Constructor of Temp called." << endl;
 }

 ~Temp()
 {
  cout << "Destructor of Temp called." << endl;
 }
};

Temp createObject()
{
 Temp temp;   // Temporary object created
 return temp; // Return object, triggering temporary destruction
}

int main()
{
 Temp obj = createObject(); // Destructor is called when the temp object goes out of scope
 return 0;
}
