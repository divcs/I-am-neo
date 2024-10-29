#include <iostream>
#include <cctype> // For isupper() and islower() functions
using namespace std;

// Base class with a virtual method game()
class Base
{
public:
 virtual int game(char a, char b) = 0; // Pure virtual function
};

// Derived class inheriting from Base
class Derive : public Base
{
public:
 int game(char a, char b) override
 {
  int score = 0;

  // Check each character and update score accordingly
  if (isupper(a))
  {
   score += 10; // Uppercase letter adds 10
  }
  else
  {
   score -= 5; // Non-uppercase letter subtracts 5
  }

  if (isupper(b))
  {
   score += 10; // Uppercase letter adds 10
  }
  else
  {
   score -= 5; // Non-uppercase letter subtracts 5
  }

  return score;
 }
};

int main()
{
 char a, b;
 cin >> a >> b; // Input characters

 Derive gameObj;
 int score = gameObj.game(a, b); // Calculate score using game method

 // Output the result
 cout << "Score : " << score << endl;

 return 0;
}
