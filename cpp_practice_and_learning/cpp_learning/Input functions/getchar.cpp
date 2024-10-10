// Reads a single character from the user. Unlike getch, it waits for the Enter key and echoes the character back.

#include <stdio.h>

int main()
{
 char c;
 printf("Enter a character: ");
 c = getchar();
 printf("You entered: %c\n", c);
 return 0;
}
