#include <iostream>
using namespace std;

class Student
{
public:
 int roll;
 string name;
 int marks[3];

public:
 Student()
 {
  cout << "Enter student's name: ";
  getline(cin, name);

  cout << "Enter roll number: ";
  cin >> roll;

  cout << "Enter marks of for three subjects:" << endl;
  for (int i = 0; i < 3; i++)
  {
   cout << "Marks for Subject " << i + 1 << ": ";
   cin >> marks[i];
  }
 }

 int total_marks()
 {
  int t = 0;
  for (int i = 0; i < 3; i++)
  {
   t = t + marks[i];
  }
  return t;
 }

 char displayGrade()
 {
  int avg = total_marks() / 3;

  if (avg >= 80)
  {
   return 'A';
  }
  else if (avg >= 60)
  {
   return 'B';
  }
  else if (avg >= 40)
  {
   return 'C';
  }
  else
  {
   return 'D';
  }
 }
};

int main()
{
 Student s1;
 cout << "Total marks of " << s1.name << ": is " << s1.total_marks() << endl;
 cout << "The grade of " << s1.name << ": is " << s1.displayGrade() << endl;

 return 0;
}