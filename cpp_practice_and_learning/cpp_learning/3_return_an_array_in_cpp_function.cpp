// Three methods

// 1 Using POINTERS
#include <iostream>
using namespace std;

int *demo() // return type- address of integer array
{
 static int a[5]; // array declared as static
 for (int i = 0; i < 5; i++)
 {
  a[i] = i; // array initialisation
 }

 return a; // address of a returned
}

int main()
{
 int *ptr; // pointer to hold address
 int i;
 ptr = demo(); // address of a
 cout << "Array is: ";
 for (i = 0; i < 5; i++)
  cout << ptr[i] << "\t"; // ptr[i] is equivalent to *(ptr+i)

 return 0;
}

// 2 Using STRUCTURE
#include <iostream>
using namespace std;

struct demo
{
 // array declared inside structure
 int arr[100];
};

struct demo func(int n) // return type is struct demo
{
 struct demo demo_mem; // demo structure member declared
 for (int i = 0; i < n; i++)
 {
  // array initialisation
  demo_mem.arr[i] = i;
 }
 return demo_mem; // address of structure member returned
}

int main()
{
 struct demo a;
 int n = 5; // number of elements

 a = func(n); // address of arr

 cout << "The Array is : ";
 for (int i = 0; i < n; i++)
 {
  cout << a.arr[i] << "\t";
 }

 return 0;
}

// 3 Using std::array

#include <iostream>
#include <array>
using namespace std;

std::array<int, 5> func() // function with return type std::array
{
 std::array<int, 5> f_array; // array declared

 for (int i = 0; i < 5; i++)
 {
  // array initialisation
  f_array[i] = i;
 }

 return f_array; // array returned
}

int main()
{
 std::array<int, 5> arr; // array with length 5

 arr = func(); // function call

 cout << "The Array is : ";
 for (int i = 0; i < 5; i++)
 {
  cout << arr[i] << "\t";
 }

 return 0;
}