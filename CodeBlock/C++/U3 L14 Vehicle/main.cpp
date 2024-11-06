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
    cout<<"Registration Number: "<<regNo<<endl;
    cout<<"Make: "<<makeV<<endl;
    cout<<"Model: "<<modelV<<endl;
    cout<<"Year of Manufacture: "<<yearM<<endl;
    }
};

int main()
{
    string r, mv, mov;
    int y;
    cout<<"Registration Number: ";
    cin>>r;
    cout<<"Make: ";
    cin>>mv;
    cout<<"Model: ";
    cin>>mov;
    cout<<"Year of Manufacture: ";
    cin>>y;

    Vehicle v(r,mv,mov,y);
    v.displayDetails();
    return 0;
}
