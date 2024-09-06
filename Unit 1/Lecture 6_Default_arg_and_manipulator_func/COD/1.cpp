#include <iostream>

void rotate(int &a, int &b, int &c)
{
 int temp = a;
 a = b;
 b = c;
 c = temp;
}

int &getSmallest(int &a, int &b, int &c)
{
 return (a < b && a < c) ? a : (b < c ? b : c); // Return the reference to the smallest
}

int main()
{
 int x, y, z;
 std::cin >> x >> y >> z;

 // Display values before rotation
 std::cout << "Before Rotation: x: " << x << " y: " << y << " z: " << z << std::endl;

 // Rotate dimensions
 rotate(x, y, z);

 // Display values after rotation
 std::cout << "After Rotation: x: " << x << " y: " << y << " z: " << z << std::endl;

 // Get and display the smallest value
 int &smallest = getSmallest(x, y, z);
 std::cout << "The smallest value among x, y, z: " << smallest << std::endl;

 return 0;
}