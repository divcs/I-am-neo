// ----- 3 getch

/*getch is another function commonly used in C and C++ programming.
It’s primarily used for capturing a single character input from the user without requiring them to press the Enter key.
getch reads a single character from the keyboard. It does not echo the character to the console (it does not display the character on the screen).
It waits for the user to press a key and then returns the ASCII value of the key pressed.*/

#include <iostream>
#include <conio.h> // Required for getch (Windows-specific)
int main()
{
 std::cout << "Press any key to continue...";
 char ch = getch(); // Waits for a single key press
 std::cout << "\nYou pressed: " << ch << std::endl;
 return 0;
}
