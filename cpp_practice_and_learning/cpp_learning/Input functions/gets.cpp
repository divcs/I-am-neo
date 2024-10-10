// gets

/* gets is used to read an entire line of input as a string, until a newline character(\n) is encountered.
The function reads input from stdin and stores it in a character array(C - style string).
Used to read a string from the user until a newline character is encountered. It does not provide bounds checking, making it insecure for input operations.*/
#include <stdio.h>

int main()
{
 char str[50];
 printf("Enter a string: ");
 gets(str); // No bounds checking, may cause buffer overflow
 printf("You entered: %s\n", str);
 return 0;
}

// gets is considered unsafe and has been removed from the C11 standard. It is better to use fgets instead.
