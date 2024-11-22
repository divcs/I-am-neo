#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
 T *ptr;
 int size;

public:
 Array(T arr[], int s);
 void print();
 void findMaxTwo();
};

template <typename T>
Array<T>::Array(T arr[], int s)
{
 size = s;
 ptr = new T[s];

 for (int i = 0; i < s; i++)
 {
  ptr[i] = arr[i];
 }
}

template <typename T>
void Array<T>::findMaxTwo()
{
 if (size < 2)
 {
  cout << "Not enough elements to find two largest." << endl;
  return;
 }

 T largest1 = ptr[0];
 T largest2 = ptr[1];

 if (largest1 < largest2)
 {
  T temp;
  temp = largest1;
  largest1 = largest2;
  largest2 = temp;
 }

 for (int i = 2; i < size; i++)
 {
  if (ptr[i] > largest1)
  {
   largest2 = largest1;
   largest1 = ptr[i];
  }
  else if (ptr[i] > largest2)
  {
   largest2 = ptr[i];
  }
 }
 cout << largest1 << " " << largest2;
}
int main()
{
 int n;
 cin >> n;
 int ar[n];
 float br[n];

 for (int i = 0; i < n; i++)
 {
  cin >> ar[i];
 }

 for (int i = 0; i < n; i++)
 {
  cin >> br[i];
 }

 Array<int> a(ar, n);
 a.findMaxTwo();
 cout << "\n";
 Array<float> b(br, n);
 b.findMaxTwo();

 return 0;
}
