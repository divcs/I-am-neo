#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char target, char auxiliary)
{
 if (n == 1)
 { // Base case
  cout << "Move disk 1 from " << source << " to " << target << endl;
  return;
 }
 towerOfHanoi(n - 1, source, auxiliary, target); // Move n-1 disks
 cout << "Move disk " << n << " from " << source << " to " << target << endl;
 towerOfHanoi(n - 1, auxiliary, target, source); // Move n-1 disks
}

int main()
{
 int numDisks = 3;
 towerOfHanoi(numDisks, 'A', 'C', 'B');
 return 0;
}
