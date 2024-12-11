#include <iostream>
using namespace std;

union UnionDemo
{
 int intVal;
 float floatVal;
 char charVal;
};
int main()
{
 UnionDemo demo;
 demo.intVal = 10;
 demo.floatVal = 10.5f;
 demo.charVal = 'A';

 cout << "Integer value: " << demo.intVal << endl;
 cout << "Float value: " << demo.floatVal << endl;
 cout << "Character value: " << demo.charVal << endl;
 return 0;
}