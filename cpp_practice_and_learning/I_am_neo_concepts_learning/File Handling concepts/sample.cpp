#include <iostream>

using namespace std;

int main()
{
 int a1, b1, c1, a2, b2, c2;
 cout << "I --- a=250, b=85, c=25 for a/b-c: " << endl;
 cin >> a1 >> b1 >> c1;

 cout << "II -- a=300, b=70, c=70 for a/b-c: " << endl;
 cin >> a2 >> b2 >> c2;

 int x1 = a1 / (b1 - c1);
 int x2 = a2 / (b2 - c2);

 cout << "a=250, b=85, c=25 for a/b-c: " << x1 << endl;
 cout << "a=300, b=70, c=70 for a/b-c: " << x2;

 return 0;
}
