// What will be the output for the following code?

#include <iostream>
using namespace std;
class MyClass
{
public:
    operator int()
    {
        return 42;
    }
};
int main()
{
    MyClass obj;
    int value = obj;
    cout << value;
    return 0;
}

/*
Answer here
        The code will not compile because of a type conversion error.
        The code will output "42". (CORRECT)
        The code will output the memory address of the obj object.
        The code will output a garbage value.
*/