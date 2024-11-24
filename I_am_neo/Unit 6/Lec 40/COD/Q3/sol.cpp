#include <iostream>
using namespace std;
template <class T>
class ProgrammingLanguage
{
protected:
 T str;

public:
 ProgrammingLanguage(T strr) : str(strr) {}
 virtual void execute() = 0;
};
class CPlusPlus : public ProgrammingLanguage<string>
{
public:
 CPlusPlus(string strr) : ProgrammingLanguage<string>(strr) {}
 void execute() override { cout << "C++ program output: " << str << endl; }
};
class Java : public ProgrammingLanguage<string>
{
public:
 Java(string strr) : ProgrammingLanguage<string>(strr) {}
 void execute() override { cout << "Java program output: " << str << endl; }
};
;
class Python : public ProgrammingLanguage<string>
{
public:
 Python(string strr) : ProgrammingLanguage<string>(strr) {}
 void execute() override { cout << "Python program output: " << str << endl; }
};

int main()
{
 string strc, strcj, strp;
 getline(cin, strc);
 getline(cin, strcj);
 getline(cin, strp);

 CPlusPlus cpp(strc);
 Java java(strcj);
 Python python(strp);
 cpp.execute();
 java.execute();
 python.execute();

 return 0;
}