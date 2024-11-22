#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <class type>
type MyMax(const type Var1, const type Var2)
{
 cout << "no specialization";
 return Var1 < Var2 ? Var2 : Var1;
}
template <>
const char *MyMax(const char *Var1, const char *Var2)
{
 return (strcmp(Var1, Var2) < 0) ? Var2 : Var1;
}
int main()
{
 string Str1 = "class", Str2 = "template";
 const char *Var3 = "class";
 const char *Var4 = "template";
 const char *q = MyMax(Var3, Var4);
 cout << q << endl;
 return 0;
}
