// 1 puts

// puts is used in C for outputting strings to the standard output (usually the console).
// It automatically adds a newline(\n) at the end of the output.
// puts does not support format specifiers like printf does.It can only output strings, and cannot directly handle numbers or other types.
// It only takes a single argument, a string(character array).puts appends a newline character at the end of the output, meaning you don’t need to add \n manually.

#include <stdio.h>

int main()
{
 puts("Hello, World!");
 puts("This is a simple string output using puts.");
 return 0;
}
