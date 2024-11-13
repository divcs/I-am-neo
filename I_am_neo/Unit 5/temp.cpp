#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int *numbers = new int[100];
 int num;
 int sum = 0;
 double avg = 0.0;
 int count = 0;
 
 while (cin >> num && num >= 0)
 {
  numbers[count] = num;
  sum += num;
  count++;
 }
 if (count > 0)
 {
  avg = static_cast<double>(sum / count);
 }
 cout << "Sum: " << sum << endl;
 cout << fixed << setprecision(2) << "Average: " << avg << endl;
 return 0;
}
