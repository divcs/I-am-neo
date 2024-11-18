#include <iostream>
#include <string>
class City
{
public:
 City() { name = new char[20]; }
 ~City() { delete[] name; }
 void SetName(const char *newName)
 {
  name = new char[strlen(newName) + 1];
  strcpy(name, newName);
 }
 void DisplayName()
 {
  std::cout << "City: " << name << std::endl;
 }

private:
 char *name;
};
int main()
{
 City city;
 city.SetName("Metropolis");
 city.DisplayName();
 return 0;
}

/*
The code will output "City: Metropolis" without any allocation failure.
The code will output "City: Metropolis" but encounter an allocation failure during the second call to SetName()
The code will result in a segmentation fault due to an allocation failure during the second call to SetName()
The code will result in a compilation error due to an invalid strcpy operation.
*/