#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    string courseName;
    string instructorName;

public:
    GradeBook(){}

    void setData(string c, string i){
    courseName=c;
    instructorName=i;
    }

    void displayMessage(){
    cout<<"Welcome to the grade book for "<<courseName<<"!"<<endl;
    cout<<"This course is presented by: "<<instructorName<<endl;
    }
};

int main()
{
    string co, ins;
    cout<<"Course: ";
    getline(cin,co);

    cout<<"Instructor: ";
    getline(cin,ins);

    GradeBook g;
    g.setData(co,ins);
    g.displayMessage();

    return 0;
}
