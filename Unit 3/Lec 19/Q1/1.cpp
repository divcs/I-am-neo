/*
Ram wants to create a simple file-based program. The program takes an integer 'n' as input, and if 'n' is less than or equal to 1000, it writes the natural numbers from 1 to 'n' into a file named "numbers.txt". Then, it reads and displays these numbers from the file to the console.



If 'n' exceeds 1000, it prints "Exceeding Limit!" and terminates.

Input format :
The first line consists of an integer n.

Output format :
The output prints the natural numbers from 1 to n in separate lines.

If n > 1000, the output prints "Exceeding Limit!" and terminates.

Code constraints :
2 <= n <= 1000

Sample test cases :
Input 1 :
5
Output 1 :
1
2
3
4
5
Input 2 :
1001
Output 2 :
Exceeding Limit!
Input 3 :
2
Output 3 :
1
2
*/

#include <iostream>
#include <fstream>

int main()
{
 int n;

 // Input the integer n
 std::cin >> n;

 // Check if n exceeds the limit
 if (n > 1000)
 {
  std::cout << "Exceeding Limit!" << std::endl;
  return 0; // Terminate the program
 }

 // Open the file for writing
 std::ofstream outfile("numbers.txt");

 // Write numbers from 1 to n to the file
 for (int i = 1; i <= n; ++i)
 {
  outfile << i << std::endl; // Write each number on a new line
 }

 // Close the file
 outfile.close();

 // Open the file for reading
 std::ifstream infile("numbers.txt");
 int number;

 // Read and display the numbers from the file
 while (infile >> number)
 {
  std::cout << number << std::endl; // Print each number on a new line
 }

 // Close the input file
 infile.close();

 return 0;
}
