/*

Krish is working on a C++ program to manage an array of integers. His approach is as follows: Prompt the user to input an integer n, followed by n integer values. Store these values in a binary file named "numbers.dat" separated by spaces. Then, read the contents of "numbers.dat" and print them to the console.

Input format :
The first line consists of an integer n.

The second line consists of n space-separated integers.

Output format :
The program displays the integers stored in the binary file, each separated by a space.

If n < 0 or n > 100, the output prints "Invalid entry".

Code constraints :
1 <= n <= 100

Sample test cases :
Input 1 :
-1
Output 1 :
Invalid entry
Input 2 :
200
893 267 142 5 686 743 517 506 21 493 671 22 304 540 788 116 484 505 810 318 340 755 599 66 775 793 884 306 140 692 435 680 273 136 349 229 964 32 960 300 726 277 958 500 525 565 363 918 628 667 678 453 393 129 569 627 888 252 467 332 683 54 436 934 339 494 224 729 190 222 837 598 180 417 396 554 429 376 414 197 985 477 877 489 102 71 236 836 65 740 718 582 817 365 778 112 7 178 564 699 590 584 991 44 186 465 439 244 430 925 103 682 219 130 732 470 191 479 241 503 736 629 246 911 796 425 571 324 557 196 386 316 488 617 491 373 381 73 819 445 711 892 643 251 968 509 128 860 745 679 80 928 606 504 501 560 413 938 710 468 204 294 717 87 357 423 358 105 371 933 398 833 639 859 645 207 721 61 741 872 424 157 961 416 869 940 122 48 158 549 223 462 422 551 994 151 317 360 174 183
Output 2 :
Invalid entry
Input 3 :
5
-71 278 3 425 50
Output 3 :
-71 278 3 425 50
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

int main()
{
 int n;

 // Prompt the user for the number of integers
 std::cout << "Enter the number of integers (1 <= n <= 100): ";
 std::cin >> n;

 // Validate input
 if (n < 1 || n > 100)
 {
  std::cout << "Invalid entry" << std::endl;
  return 0; // Exit if invalid
 }

 std::vector<int> numbers(n); // Vector to hold the integers

 // Prompt for the integer values
 std::cout << "Enter " << n << " space-separated integers: ";
 for (int i = 0; i < n; ++i)
 {
  std::cin >> numbers[i]; // Read each integer
 }

 // Write the integers to a binary file
 std::ofstream outfile("numbers.dat", std::ios::binary);
 if (outfile.is_open())
 {
  // Write each integer to the binary file
  for (int number : numbers)
  {
   outfile.write(reinterpret_cast<const char *>(&number), sizeof(number));
  }
  outfile.close();
 }
 else
 {
  std::cerr << "Error opening file for writing." << std::endl;
  return 1; // Exit if the file could not be opened
 }

 // Read the integers back from the binary file
 std::ifstream infile("numbers.dat", std::ios::binary);
 if (infile.is_open())
 {
  int number;
  // Read and display the contents of the file
  while (infile.read(reinterpret_cast<char *>(&number), sizeof(number)))
  {
   std::cout << number << " "; // Output each number separated by space
  }
  std::cout << std::endl; // New line after output
  infile.close();
 }
 else
 {
  std::cerr << "Error opening file for reading." << std::endl;
  return 1; // Exit if the file could not be opened
 }

 return 0;
}



