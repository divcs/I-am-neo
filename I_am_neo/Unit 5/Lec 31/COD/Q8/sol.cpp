#include <iostream>
using namespace std;

int main()
{
 int choice;
 string username;
 string password;
 bool bl = false;
 int count = 0;
 string *records = new string[10];

 cin >> choice;

 while (!bl)
 {
  switch (choice)
  {
  case 1:
   cin >> username;
   cin >> password;
   count++;
   records[count] = username;
   records[count] = password;
   
  case 2:
   cin >> username;
  case 3:
   bl = false;
   return 0;
  }
 }
 return 0;
}