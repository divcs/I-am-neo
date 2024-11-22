#include <iostream>
#include <deque>
using namespace std;
int main()
{
 unsigned int i;
 deque<int> a(3, 100);
 deque<int> b(5, 200);
 a.swap(b);
 cout << "a contains:";
 for (deque<int>::iterator it = a.begin(); it != a.end(); ++it)
  cout << ' ' << *it;
 cout << endl;
 cout << "b contains:";
 for (deque<int>::iterator it = b.begin(); it != b.end(); ++it)
  cout << ' ' << *it;
 return 0;
}
