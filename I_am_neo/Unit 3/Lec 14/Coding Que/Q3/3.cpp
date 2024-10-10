/*
Create a program using a Room class to manage room details.



The program should read the initial dimensions (length, breadth, and height) to create a Room object, r1.
A copy constructor should be employed to create r2, an identical copy of r1.
You can update r2's dimensions by entering integers, where -1 implies no changes. The length and height have not changed but the breadth is reduced by 10 (breadth - 10).
The program should calculate and display the areas of both r1 and r2, ensuring the copy constructor accurately replicates r1's dimensions.


Formula: Arear = 2 * (length + breadth) * height

Input format :
The input consists of three integers separated by spaces: length (l), breadth (b), and height (h), representing the dimensions of the room.

Output format :
The output prints two lines of output:



The first line displays the area of the original room (r1).
The second line displays the area of the modified room (r2).


Refer to the sample output for the exact text.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ l, b, h ≤ 100

Sample test cases :
Input 1 :
20 20 20
Output 1 :
r1 area: 1600
r2 area: 1200
*/

#include <iostream>

class Room
{
public:
 int length;
 int breadth;
 int height;

 // Constructor
 Room(int l, int b, int h) : length(l), breadth(b), height(h) {}

 // Copy constructor
 Room(const Room &other) : length(other.length), breadth(other.breadth), height(other.height) {}

 int calculateArea() const
 {
  return 2 * (length + breadth) * height;
 }
};

int main()
{
 int l, b, h;
 std::cin >> l >> b >> h;

 Room r1(l, b, h);
 Room r2 = r1; // Using copy constructor

 int new_l, new_b, new_h;
 std::cin >> new_l >> new_b >> new_h; // This input is not used in this problem statement

 if (new_b != -1)
 {
  r2.breadth = r2.breadth - 10;
 }

 std::cout << "r1 area: " << r1.calculateArea() << std::endl;
 std::cout << "r2 area: " << r2.calculateArea() << std::endl;

 return 0;
}