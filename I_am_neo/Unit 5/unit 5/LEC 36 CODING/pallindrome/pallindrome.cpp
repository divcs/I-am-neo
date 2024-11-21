#include<iostream>
#include<string>
using namespace std;
bool ispallaindrome(string &s){
    string temp = s;
    int start = 0;
    int end  = s.size() - 1;

    while(start <= end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    return temp == s;
}

bool pall(string &s){
  int i = 0;
  int j = s.size() - 1;

  while (i <= j)
  {
    if ( s[i] != s[j]){
        return false;
    }
    i++;
    j--;
  }
  return true;
}
int main(){
string str1 = "racecar";
string str2= "race";

if(pall(str1)){
cout<< "pallindrome"<<endl;
}
else{
    cout<<"No pallindrome"<<endl;
}
return 0;
}