#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
 string courseName;
 string instructorName;

public:
 GradeBook() {}

 void setData(string courseName, string instructorName)
 {
  courseName = courseName;
  instructorName = instructorName;
 }

 void displayMessage(string courseName, string instructorName)
 {
  cout << "courseName: " << courseName << " instructorName: " << instructorName << endl;
 }
};

int main()
{
 string courseName, instructorName;
 cin >> courseName >> instructorName;

 GradeBook gradeBook;
 gradeBook.setData(courseName, instructorName);
 gradeBook.displayMessage(courseName, instructorName);

 return 0;
}