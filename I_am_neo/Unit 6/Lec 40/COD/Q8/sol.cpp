// You are using GCC
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
 int n;
 cin >> n;

 vector<int> patients(n);
 for (int i = 0; i < n; i++)
 {
  cin >> patients[i];
 }

 int p;
 cin >> p;
 for (int i : patients)
 {
  patients.erase(remove(patients.begin(), patients.end(), p), patients.end());
 }

 for (int i : patients)
 {
  cout << i << " ";
 }
 cout << endl;
}