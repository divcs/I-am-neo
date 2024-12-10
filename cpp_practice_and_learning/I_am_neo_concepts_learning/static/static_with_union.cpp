#include <iostream>
using namespace std;

class Test
{
 union
 {
  int intValue;
  float floatValue;
 };
 static int accessCount; // Track accesses
public:
 void setInt(int val)
 {
  intValue = val;
  accessCount++;
 }

 void setFloat(float val)
 {
  floatValue = val;
  accessCount++;
 }

 void showInt() const
 {
  cout << "Integer: " << intValue << endl;
 }

 void showFloat() const
 {
  cout << "Float: " << floatValue << endl;
 }

 static void showAccessCount()
 {
  cout << "Access count: " << accessCount << endl;
 }
};

int Test::accessCount = 0; // Initialize static member

int main()
{
 Test obj;
 obj.setInt(42);
 obj.showInt();

 obj.setFloat(3.14);
 obj.showFloat();

 Test::showAccessCount(); // Access static member function

 return 0;
}
