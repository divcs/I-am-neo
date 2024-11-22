#include <iostream>
#include <exception>

using namespace std;

int main()
{
 try
 {
  int size;
  cin >> size;

  if (size < 0)
  {
   throw(size);
  }
  if (size == 0)
  {
   throw(size);
  }
  if (size > 0)
  {
   int *arr = new int[size];

   for (int i = 0; i < size; i++)
   {
    cin >> arr[i];
   }

   for (int i = 0; i < size; i++)
   {
    cout << arr[i] << " ";
   }
  }
 }
 catch (int size)
 {
  if (size < 0)
  {
   cout << "Exception caught. Array size should be a positive number." << endl;
  }
  else if (size == 0)
  {
   cout << "Exception caught. Array is empty." << endl;
  }
 }
 return 0;
}
