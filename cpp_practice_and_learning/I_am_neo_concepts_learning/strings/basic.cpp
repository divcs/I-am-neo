#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 char name[20] = "Divya";
 char surname[20] = "Surname";
 strcat(name, surname);
 cout << name << endl;
 cout << "Length of string: " << strlen(name) << endl;

 strcpy(name, "Divi");
 cout << name;

 return 0;
}