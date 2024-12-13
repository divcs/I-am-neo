#include <iostream>
using namespace std;

class Demo
{
public:
 int value;
};

int main()
{
 Demo obj;
 obj.value = 10;

 int Demo::*ptr = &Demo::value; // Pointer to data member
 cout << "Value: " << obj.*ptr << endl;

 return 0;
}
