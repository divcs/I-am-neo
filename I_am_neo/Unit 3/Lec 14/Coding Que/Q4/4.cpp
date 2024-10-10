/*
Create a program that manages distances using the Distance class. The program should allow you to input two distances in feet and inches, and it will calculate their sum. The Distance class contains methods for setting distances, adding distances, and displaying distances. The program will create two Distance objects: d1 and d2, where d2 is a copy of d1 using a copy constructor. It then calculates the sum of d1 and d2 and displays the result.



Note: 1 foot = 12 inches

Input format :
The first line should contain two integers representing the feet and inches of the first distance, separated by a space.

The second line should contain two integers representing the feet and inches of the second distance, also separated by a space.

Output format :
The output will display the sum of the two distances in the format X'Y", where X is the total feet and Y is the total inches.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ feet ≤ 100

1 ≤ inches ≤ 12

Sample test cases :
Input 1 :
10 1
20 1
Output 1 :
30'2"
Input 2 :
20 12
20 1
Output 2 :
41'1"
*/

#include <iostream>

class Distance
{
private:
 int feet;
 int inches;

public:
 // Constructor
 Distance(int f = 0, int i = 0) : feet(f), inches(i)
 {
  // Normalize inches to be within 0-11
  feet += inches / 12;
  inches %= 12;
 }

 // Copy constructor
 Distance(const Distance &d) : feet(d.feet), inches(d.inches) {}

 // Setter method
 void setDistance(int f, int i)
 {
  feet = f;
  inches = i;
  // Normalize inches to be within 0-11
  feet += inches / 12;
  inches %= 12;
 }

 // Method to add two distances
 Distance addDistance(const Distance &d) const
 {
  int totalFeet = feet + d.feet;
  int totalInches = inches + d.inches;
  return Distance(totalFeet, totalInches);
 }

 // Method to display distance
 void displayDistance() const
 {
  std::cout << feet << "'" << inches << "\"";
 }
};

int main()
{
 int feet1, inches1, feet2, inches2;
 std::cin >> feet1 >> inches1 >> feet2 >> inches2;

 Distance d1(feet1, inches1);
 Distance d2(d1); // Using copy constructor
 d2.setDistance(feet2, inches2);

 Distance sum = d1.addDistance(d2);
 sum.displayDistance();
 std::cout << std::endl;

 return 0;
}