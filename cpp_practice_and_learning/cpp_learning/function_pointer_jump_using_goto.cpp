#include <stdio.h>
#include <stdlib.h>

void hello_world()
{
 // This function simply prints the name of the function(hello_world) to standard output.
 // The __func__ macro is a predefined identifier in C that resolves to the name of the current function as a string literal.
 puts(__func__); // hello_world
 exit(0);
}

int main()
{
 //&hello_world obtains the address of the hello_world function.
 // goto *<address> is a GNU extension that allows you to perform a computed jump to a specific address in memory, effectively treating the address like a label.
 // By using goto *&hello_world;, the program jumps directly to the address of hello_world, effectively starting execution at that function without a traditional function call.
 goto *&hello_world;
}
