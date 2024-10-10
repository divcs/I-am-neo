// For modern C++ programs, getline and cin are commonly preferred for their safety and ease of use. In C, scanf and getchar are more widely used for various input scenarios.

/*
C Input Functions

General Input:

 scanf: Reads formatted input from stdin.
 sscanf: Reads formatted data from a string.

String Input:

 gets: Reads a string from stdin until a newline (unsafe, removed in C11).
 fgets: Reads a string with bounds checking from a specified stream.

Character Input:

 getchar: Reads a single character from stdin.
 getch: Reads a single character without waiting for Enter (not standard, available in <conio.h> on Windows).
 getche: Reads a character with echo, without waiting for Enter (not standard, available in <conio.h> on Windows).
 fgetc: Reads a single character from a specified file stream.
 getc: Reads a single character from a specified file stream, similar to fgetc.

Advanced Character Handling:

 ungetc: Pushes a character back to the input stream to be read again.

-- C++ Input Functions

General Input:

 cin: Reads data from standard input with support for various data types.
 cin >> ws: Skips any leading whitespace in the input stream.

String Input:

 getline: Reads a line from the input stream into a std::string.
 cin.getline(): Reads a line into a character array with bounds checking.

Character Input:

 cin.get(): Reads a single character from cin.
 cin.peek(): Reads the next character from the stream without extracting it.
 cin.putback(): Puts a character back onto the input stream for re-reading.

Stream Manipulation:

 cin.ignore(): Ignores a specified number of characters or up to a specified delimiter.
 cin.sync(): Clears any input data left in the buffer to synchronize with the source.

String Stream Input:

 istringstream: Reads data from a std::string as if it were an input stream.
 stringstream: Allows both reading from and writing to strings, useful for parsing and formatting data.
 */