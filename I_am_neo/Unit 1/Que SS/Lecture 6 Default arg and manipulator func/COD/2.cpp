#include <iostream>
#include <vector>

int sum(int n, const std::vector<int> &transactions)
{
 int total = 0;
 for (int i = 0; i < n; ++i)
 {
  total += transactions[i];
 }
 return total;
}

int main()
{
 int n;
 std::cin >> n;
}
