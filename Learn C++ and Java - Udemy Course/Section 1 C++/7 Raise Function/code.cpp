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
 int i = 0;
 // register signal SIGINT and signal handler
 signal(SIGINT, signalHandler); // first arg is an integer which represents signal number and second arg is a pointer to the signal handling function

 while (++i)
 {
  cout << "Going to sleep...." << endl;

  if (i == 3)
  {
   raise(SIGINT);
  }

  sleep(1);
 }

 return 0;
}