#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
 int myints[] = {10, 20, 30, 40, 50};
 vector<int> myvector(4, 99);
 iter_swap(myints, myvector.begin());
 iter_swap(myints + 3, myvector.begin() + 2);
 for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
 {
  cout << *it << ' ';
 }
 return 0;
}
