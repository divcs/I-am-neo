#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;

class Person
{
protected:
 string firstName;
 string lastName;
 int id;

public:
 // Constructor to initialize Person attributes
 Person(const string &fName, const string &lName, int idNumber)
     : firstName(fName), lastName(lName), id(idNumber) {}

 // Method to print Person's information
 void printInfo()
 {
  cout << "Name: " << firstName << " " << lastName << endl;
  cout << "ID: " << id << endl;
 }
};

class Student : public Person
{
private:
 vector<int> testScores;

public:
 // Constructor to initialize Student attributes
 Student(const string &fName, const string &lName, int idNumber, const vector<int> &scores)
     : Person(fName, lName, idNumber), testScores(scores) {}

 // Method to calculate the grade based on test scores
 char calculateGrade()
 {
  if (testScores.empty())
   return 'T'; // No scores available

  int total = 0;
  for (int score : testScores)
  {
   total += score;
  }
  double average = static_cast<double>(total) / testScores.size();

  if (average >= 90)
   return 'O';
  else if (average >= 80)
   return 'E';
  else if (average >= 70)
   return 'A';
  else if (average >= 55)
   return 'P';
  else if (average >= 40)
   return 'D';
  else
   return 'T';
 }

 // Method to display the student's information along with the grade
 void displayInfo()
 {
  printInfo();
  cout << "Grade: " << calculateGrade() << endl;
 }
};

int main()
{
 string firstName, lastName;
 int id, numScores;

 // Read input
 getline(cin, firstName);
 getline(cin, lastName);
 cin >> id;
 cin >> numScores;

 vector<int> scores(numScores);
 for (int i = 0; i < numScores; i++)
 {
  cin >> scores[i];
 }

 // Create a Student object and display information
 Student student(firstName, lastName, id, scores);
 student.displayInfo();

 return 0;
}
