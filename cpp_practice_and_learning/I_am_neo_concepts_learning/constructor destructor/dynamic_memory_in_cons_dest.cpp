#include <iostream>
using namespace std;

class Sample
{
 int *ptr;

public:
 Sample(int v)
 {
  ptr = new int(v);
  cout << "Constructor";
 }

 ~Sample()
 {
  delete ptr;
  cout << "Destructor";
 }

 void display()
 {
  cout << "Value: " << *ptr << endl;
 }
};
int main()
{

 Sample s1(10);
 s1.display();
 return 0;
}