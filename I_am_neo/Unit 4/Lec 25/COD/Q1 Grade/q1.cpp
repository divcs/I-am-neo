#include <iostream>
#include <string>
using namespace std;

class Grade
{
 int marks;
 string grade;

public:
 // Constructor to initialize with marks and calculate grade
 Grade(int obtainedMarks) : marks(obtainedMarks)
 {
  int totalMarks = 500;
  double percentage = (static_cast<double>(marks) / totalMarks) * 100;

  // Determine grade based on percentage
  if (percentage >= 90)
  {
   grade = "A+";
  }
  else if (percentage >= 80)
  {
   grade = "A";
  }
  else if (percentage >= 70)
  {
   grade = "B";
  }
  else if (percentage >= 60)
  {
   grade = "C";
  }
  else if (percentage >= 50)
  {
   grade = "D";
  }
  else
  {
   grade = "F";
  }
 }

 // Conversion operator to int for marks
 operator int() const
 {
  return marks;
 }

 // Conversion operator to string for grade
 operator string() const
 {
  return grade;
 }
};

int main()
{
 int obtainedMarks;
 cin >> obtainedMarks;

 Grade studentGrade(obtainedMarks);

 // Convert the Grade object to int and string
 int marks = studentGrade;
 string grade = studentGrade;

 // Display output
 cout << "Marks: " << marks << endl;
 cout << "Grade: " << grade << endl;

 return 0;
}
