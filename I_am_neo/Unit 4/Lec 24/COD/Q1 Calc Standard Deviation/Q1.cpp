#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

class Statistics
{
public:
 static double calculateStandardDeviation(const vector<int> &data)
 {
  int n = data.size();
  double mean = 0.0;

  for (int val : data)
  {
   mean += val;
  }
  mean /= n;

  double variance = 0.0;
  for (int val : data)
  {
   variance += pow(val - mean, 2);
  }
  variance /= n;

  return sqrt(variance);
 }
};

int main()
{
 int n;
 cin >> n;
 vector<int> data(n);

 for (int i = 0; i < n; i++)
 {
  cin >> data[i];
 }

 double stdDeviation = Statistics::calculateStandardDeviation(data);
 cout << fixed << setprecision(2) << stdDeviation << endl;

 return 0;
}
