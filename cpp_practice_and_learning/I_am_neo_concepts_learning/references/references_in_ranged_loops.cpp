#include <iostream>
#include <vector>
using namespace std;

int main()
{
 vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 for (int &num : numbers)
 {
  num *= 2;
 }
 for (int &num : numbers)
 {
  cout << num << " ";
 }

 return 0;
}