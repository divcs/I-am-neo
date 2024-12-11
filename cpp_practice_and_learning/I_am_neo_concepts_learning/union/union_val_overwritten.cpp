#include <iostream>
#include <cstring>
using namespace std;

union Data
{
 int intValue;
 float floatValue;
 char charValue[20];
};

int main()
{
 Data data;

 data.intValue = 10; // Assigning to intValue
 cout << "Int value: " << data.intValue << endl;

 data.floatValue = 5.5; // Assigning to floatValue
 cout << "Float value: " << data.floatValue << endl;

 strcpy(data.charValue, "Hello, Union!"); // Assigning to charValue
 cout << "Char value: " << data.charValue << endl;

 // Note: Previous values are overwritten due to shared memory
 cout << "Int value (overwritten): " << data.intValue << endl;

 return 0;
}
