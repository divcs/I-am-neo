#include <iostream>
using namespace std;

class StaticDemo
{
 static int count;

public:
 static int increment()
 {
  count++;
  return count;
 }

 static void display()
 {
  cout << "Count is:" << count << endl;
 }
};

int StaticDemo::count = 0;
int main()
{
 StaticDemo::increment();
 StaticDemo::increment();
 StaticDemo::increment();
 StaticDemo::display(); // 3

 StaticDemo obj1;
 obj1.increment();
 obj1.increment();
 obj1.display(); // 5

 return 0;
}