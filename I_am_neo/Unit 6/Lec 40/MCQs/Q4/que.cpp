#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int myints[] = {13, 10, 1, 87, 8746}; // Swapping elements using iter_swap
 iter_swap(myints, myints + 1);
 iter_swap(myints + 3, myints + 4);
 for (int i = 0; i < 5; ++i)
 {
  cout << myints[i] << ' ';
 }
 return 0;
}
