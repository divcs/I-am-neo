#include <iostream>
#include <iterator>
#include <list>
using namespace std;
int main()
{
 list<int> mylist;
 for (int i = 0; i < 5; i++)
  mylist.push_back(i * 20);
 list<int>::iterator first = mylist.begin();
 list<int>::iterator last = mylist.end();
 cout << distance(first, last) << endl;
 return 0;
}
