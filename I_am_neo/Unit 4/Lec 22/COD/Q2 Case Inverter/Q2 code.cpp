#include <iostream>
#include <cstring>

class CustomString
{
private:
 char str[101]; // Character array to store the string (up to 100 characters + 1 for null terminator)

public:
 // Constructor to initialize the string
 CustomString(const char *input)
 {
  std::strncpy(str, input, 100);
  str[100] = '\0'; // Ensure null termination
 }

 // Overload the ! operator to invert the case of each character
 void operator!()
 {
  for (int i = 0; str[i] != '\0'; i++)
  {
   if (std::isupper(str[i]))
   {
    str[i] = std::tolower(str[i]);
   }
   else if (std::islower(str[i]))
   {
    str[i] = std::toupper(str[i]);
   }
  }
 }

 // Function to print the original string
 void printOriginal() const
 {
  std::cout << "Original String: " << str << std::endl;
 }

 // Function to print the inverted string
 void printInverted() const
 {
  std::cout << "Inverted String: " << str << std::endl;
 }
};

int main()
{
 char input[101];
 std::cin.getline(input, 101); // Read input string up to 100 characters

 CustomString customStr(input);

 customStr.printOriginal(); // Print the original string
 !customStr;                // Invert the case of characters using the overloaded ! operator
 customStr.printInverted(); // Print the inverted string

 return 0;
}
