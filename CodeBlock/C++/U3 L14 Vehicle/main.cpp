#include <iostream>
#include <string>
using namespace std;

class Vehicle{
string regNo;
string makeV;
string modelV;
int yearM;

public:
    Vehicle(string r, string m, string model, int y):regNo(r),makeV(m),modelV(model),yearM(y){}

    void displayDetails(){
    cout<<"Reg No: "<<regNo<<endl;
    cout<<"Reg No: "<<regNo<<endl;
    cout<<"Reg No: "<<regNo<<endl;
    cout<<"Reg No: "<<regNo<<endl;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
