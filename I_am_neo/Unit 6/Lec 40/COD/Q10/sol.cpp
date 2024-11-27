// You are using GCC
// 1 testcase failed
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class student
{
public:
 int roll;
 string name;
 int grades[3];

 student(int r, string n) : roll(r), name(n)
 {
  setGrade();
 }

 void setGrade(int g1 = 0, int g2 = 0, int g3 = 0)
 {
  grades[0] = g1;
  grades[1] = g2;
  grades[2] = g3;
 }
};

void display(const vector<student> &s, int roll)
{
 bool found = false;
 for (const auto student : s)
 {

  if (student.roll == roll)
  {
   found = true;
   cout << "name: " << student.name << endl;
   cout << "roll number: " << student.roll << endl;
   cout << "grades: ";
   for (int i = 0; i < 3; i++)
   {
    cout << student.grades[i] << " ";
   }
   cout << endl;
   break;
  }
 }
 if (!found)
 {
  cout << "student with roll number " << roll << " not found." << endl;
 }
}
int find(const vector<student> &s, int roll)
{
 for (size_t i = 0; i < s.size(); i++)
 {
  if (s[i].roll == roll)
  {
   return i;
  }
 }
 return -1;
}
int main()
{
 vector<student> records;

 int ch;
 while (true)
 {
  cin >> ch;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  if (ch == 1)
  {
   string name;
   int roll;
   getline(cin, name);

   cin >> roll;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   records.push_back(student(roll, name));
  }
  else if (ch == 2)
  {

   int roll;
   cin >> roll;
   int index = find(records, roll);
   if (index != -1)
   {
    int g1, g2, g3;
    cin >> g1 >> g2 >> g3;
    records[index].setGrade(g1, g2, g3);
   }
   else
   {
    cout << "student with roll number " << roll << " not found." << endl;
   }
  }
  else if (ch == 3)
  {
   int roll;
   cin >> roll;
   display(records, roll);
  }
  else if (ch == 4)
  {
   cout << "exiting the program.";
   break;
  }
  else
  {
   cout << "invalid choice" << endl;
  }
 }
 return 0;
}