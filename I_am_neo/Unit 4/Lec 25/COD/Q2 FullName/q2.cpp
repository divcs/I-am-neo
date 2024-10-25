#include <iostream>
#include <string>
using namespace std;

class FullName
{
private:
 string fullName;

public:
 // Constructor to create full name from first and last name
 FullName(const string &firstName, const string &lastName)
 {
  fullName = firstName + " " + lastName;
 }

 // Conversion operator to convert FullName object to string
 operator string() const
 {
  return fullName;
 }
};

int main()
{
 string firstName;
 string lastName;

 // Input for first name
 getline(cin, firstName);

 // Input for last name
 getline(cin, lastName);

 // Create a FullName object
 FullName fullName(firstName, lastName);

 // Output the full name
 cout << string(fullName) << endl;

 return 0;
}
