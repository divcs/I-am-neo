
#include <iostream>
#include <exception>
using namespace std;

int main()
{
 try
 {
  int *myarray = new int[1000];
  cout << "Allocated";
 }
 catch (exception &e)
 {
  cout << "Standard exception: " << e.what() << endl;
 }
 return 0;
}
/*
        Answer here
            Allocated

                Standard exception

                    Nothing will be printed

                        Compile Time Error*/