#include <iostream>
using namespace std;

class Complex{
float r;
float img;

public:
Complex():r(0.0),img(0.0){}

void setValue(float r, float i){
this->r=r;
this->img=i;
}

Complex add(const Complex &other)const{
Complex sum;
sum.r=r+other.r;
sum.img=img+other.img;

return sum;
}

void display()const{
cout<<"Number is: "<<r<<"+"<<img<<"i"<<endl;
}

};

int main()
{
  float r1,img1,r2,img2;
  cout<<"Enter first Complex number:";
  cin>>r1>>img1;
  cout<<"Enter second Complex number:";
  cin>>r2>>img2;

  Complex c1,c2,c3;

  c1.setValue(r1,img1);
  c2.setValue(r2,img2);

  c3=c1.add(c2);
  c3.display();

    return 0;
}
