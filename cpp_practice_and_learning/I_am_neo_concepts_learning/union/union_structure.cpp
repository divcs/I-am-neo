#include <iostream>
#include <cstring>
using namespace std;

struct Message
{
 int messageType; // 1 = int, 2 = float, 3 = string
 union
 {
  int intData;
  float floatData;
  char stringData[20];
 } content;
};

int main()
{
 Message msg;

 // Set an integer message
 msg.messageType = 1;
 msg.content.intData = 42;
 cout << "Integer message: " << msg.content.intData << endl;

 // Set a float message
 msg.messageType = 2;
 msg.content.floatData = 3.14;
 cout << "Float message: " << msg.content.floatData << endl;

 // Set a string message
 msg.messageType = 3;
 strcpy(msg.content.stringData, "Hello!");
 cout << "String message: " << msg.content.stringData << endl;

 return 0;
}
