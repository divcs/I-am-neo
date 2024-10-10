// Used for formatted input in C. It can read multiple data types using format specifiers.

#include <stdio.h>

int main()
{
 int age;
 char name[50];

 printf("Enter your name: ");
 scanf("%s", name); // Reads until space
 printf("Enter your age: ");
 scanf("%d", &age);

 printf("Name: %s, Age: %d\n", name, age);
 return 0;
}

// NOTE: Like cin, scanf stops reading strings at whitespace. Use fgets for multi-word strings.