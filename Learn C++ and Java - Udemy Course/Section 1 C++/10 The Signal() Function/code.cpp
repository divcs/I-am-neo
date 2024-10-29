#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
 cout << "Interrupt signal(" << signum << ") received.\n";

 // cleanup & close stuff here
 // terminate program
 exit(signum);
}
int main()
{
 // register signal SIGINT and signal handler
 signal(SIGINT, signalHandler); // first arg is an integer which represents signal number and second arg is a pointer to the signal handling function

 while (1)
 {
  cout << "Going to sleep...." << endl;
  sleep(1);
 }
 return 0;
}