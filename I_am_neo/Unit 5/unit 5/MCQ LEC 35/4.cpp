5#include <iostream>
#include <string>
using namespace std;
class A{
	int a;
    public:
	virtual void func() = 0;
};
 
class B: public A{
   public:
	void func(){
		cout<<"Class B"<<endl;
	}	
};
int main(){
	B b;
	b.func();
	return 0;
}