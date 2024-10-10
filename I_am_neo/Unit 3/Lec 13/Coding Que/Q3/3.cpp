/*
You are tasked with creating a GradeBook class to automate grade storage for students. The GradeBook class should have the following features:



Private members: courseName and instructorName with corresponding get and set methods.
A default constructor that allows creating an object without initial values and a setData method to set courseName and instructorName.
A displayMessage method to display the course and instructor details.
Utilize string data types for data handling.


The program should take input for the course name and instructor name and display them as is.

Input format :
The input consists of two strings: the course name and instructor name, each on a separate line.

Output format :
The output displays a welcome message for the grade book. The welcome message includes the course name and the instructor's name.



Refer to the sample output for the exact format.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ length of grade and instructor's names ≤ 100 characters

Sample test cases :
Input 1 :
CS50
David Mallon
Output 1 :
Welcome to the grade book for CS50!
This course is presented by: David Mallon
Input 2 :
Computer Science
Addyson David Vicente Saunders
Output 2 :
Welcome to the grade book for Computer Science!
This course is presented by: Addyson David Vicente Saunders
*/

#include <iostream>
#include <string>

class GradeBook
{
private:
 std::string courseName;
 std::string instructorName;

public:
 // Default constructor
 GradeBook() {}

 // Set data for course name and instructor name
 void setData(const std::string &course, const std::string &instructor)
 {
  courseName = course;
  instructorName = instructor;
 }

 // Get course name
 std::string getCourseName() const
 {
  return courseName;
 }

 // Get instructor name
 std::string getInstructorName() const
 {
  return instructorName;
 }

 // Display a welcome message with course and instructor details
 void displayMessage() const
 {
  std::cout << "Welcome to the grade book for " << courseName << "!\n";
  std::cout << "This course is presented by: " << instructorName << std::endl;
 }
};

int main()
{
 GradeBook myGradeBook;
 std::string courseName, instructorName;

 std::getline(std::cin, courseName);
 std::getline(std::cin, instructorName);

 myGradeBook.setData(courseName, instructorName);
 myGradeBook.displayMessage();

 return 0;
}
