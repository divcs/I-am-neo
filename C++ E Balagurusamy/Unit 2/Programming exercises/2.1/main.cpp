#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string sub[]={"Maths", "Physics", "Chemistry"};
    int marks[]={90,77,69};

    for(int i=0; i<3; i++){
        cout<<left;
        cout<<setw(10)<<sub[i]<<setw(4)<<"="<<setw(5)<<marks[i]<<endl;
    }

return 0;
}


//or


#include <iostream>
#include <iomanip> // for setw
using namespace std;

int main()
{
    cout << left; // align text to the left
    cout << setw(10) << "Maths" << "= 90" << endl;
    cout << setw(10) << "Physics" << "= 77" << endl;
    cout << setw(10) << "Chemistry" << "= 69" << endl;
    return 0;
}
