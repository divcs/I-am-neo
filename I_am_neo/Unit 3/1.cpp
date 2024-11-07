#include <iostream>
#include <vector>

using namespace std;
class Integer
{
 int N;

public:
 Integer(int n = 0) : N(n) {}

 void getValue() const
 {
  cout << N;
 }

 void setValue(int n)
 {
  N = n;
 }
};
int main()
{
 int N;
 cin >> N;
 vector<Integer> arr(N);

 for (int i = 0; i < N; i++)
 {
  if (i % 2 != 0)
  {
   arr[i].setValue(10);
  }
 }
 for (int i = 0; i < N; i++)
 {
  cout << arr[i].getValue();
 }

 return 0;
}
