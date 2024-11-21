#include <iostream>
using namespace std;

int main()
{
 int nums, first, diff, i = 0, sum = 0;
 cin >> nums >> first >> diff;

 int *ap = new int[nums];

 while (i < nums)
 {
  if (i == 0)
  {
   ap[0] = first;
   sum += ap[0];
  }
  else
  {
   ap[i] = ap[i - 1] + diff;
   sum += ap[i];
   i++;
  }
 }

 cout << "Sum: " << sum << endl;
 return 0;
}