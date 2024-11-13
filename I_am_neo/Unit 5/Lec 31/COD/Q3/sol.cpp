#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int n;
 cin >> n;

 string *names = new string[n];

 for (int i = 0; i < n; i++)
 {
  cin >> names[i];
 }

 sort(names, names + n);

 for (int i = 0; i < n; i++)
 {
  cout << names[i] << " ";
 }

 return 0;
}

// or

#include <iostream>
#include <string>

int main()
{
 int n;
 std::cout << "Enter the number of names: ";
 std::cin >> n;

 // Dynamically allocate memory for 'n' strings
 std::string *names = new std::string[n];

 // Input the names
 std::cout << "Enter the names:\n";
 for (int i = 0; i < n; ++i)
 {
  std::cin >> names[i];
 }

 // Manual sorting using Bubble Sort
 for (int i = 0; i < n - 1; ++i)
 {
  for (int j = 0; j < n - i - 1; ++j)
  {
   if (names[j] > names[j + 1])
   {
    // Swap names[j] and names[j + 1]
    std::string temp = names[j];
    names[j] = names[j + 1];
    names[j + 1] = temp;
   }
  }
 }

 // Display the sorted list of names
 std::cout << "Sorted names:\n";
 for (int i = 0; i < n; ++i)
 {
  std::cout << names[i];
  if (i < n - 1)
   std::cout << " ";
 }
 std::cout << std::endl;

 // Free the dynamically allocated memory
 delete[] names;

 return 0;
}
