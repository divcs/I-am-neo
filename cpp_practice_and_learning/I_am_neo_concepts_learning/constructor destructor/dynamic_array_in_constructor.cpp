#include <iostream>
using namespace std;

class DynamicArr
{
 int *arr;
 int size;

public:
 DynamicArr(int s)
 {
  size = s;
  arr = new int[s];
  cout << "Enter values for array:";
  for (int i = 0; i < s; i++)
  {
   cin >> arr[i];
  }
  cout << "constructor" << endl;
 }

 ~DynamicArr()
 {
  delete[] arr;
  cout << "destructor" << endl;
 }

 void display()
 {
  cout << "Printing array: ";
  for (int i = 0; i < size; i++)
  {
   cout << arr[i] << " ";
  }
  cout << endl;
 }
};

int main()
{
 int size;
 cout << "Enter size: ";
 cin >> size;

 DynamicArr dr(size);
 dr.display();
 return 0;
}