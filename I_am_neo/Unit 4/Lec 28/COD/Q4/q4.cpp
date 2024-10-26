#include <iostream>
using namespace std;

// Class A multiplies the value by 2
class A
{
public:
 void func(int &val)
 {
  val *= 2;
 }
};

// Class B multiplies the value by 3
class B
{
public:
 void func(int &val)
 {
  val *= 3;
 }
};

// Class C multiplies the value by 5
class C
{
public:
 void func(int &val)
 {
  val *= 5;
 }
};

// Class D inherits from A, B, and C
class D : public A, public B, public C
{
public:
 int val;
 int countA, countB, countC;

 D()
 {
  val = 1;                      // Initialize val to 1
  countA = countB = countC = 0; // Initialize the call counters
 }

 // This function updates val to new_val by calling func from A, B, or C
 void update_val(int new_val)
 {
  while (new_val % 2 == 0)
  {
   A::func(val); // Call A's func to multiply val by 2
   countA++;     // Increment A's call count
   new_val /= 2; // Divide new_val by 2
  }
  while (new_val % 3 == 0)
  {
   B::func(val); // Call B's func to multiply val by 3
   countB++;     // Increment B's call count
   new_val /= 3; // Divide new_val by 3
  }
  while (new_val % 5 == 0)
  {
   C::func(val); // Call C's func to multiply val by 5
   countC++;     // Increment C's call count
   new_val /= 5; // Divide new_val by 5
  }
 }

 // Display the value and function call counts
 void display()
 {
  cout << "Value = " << val << endl;
  cout << "A's func called " << countA << " times" << endl;
  cout << "B's func called " << countB << " times" << endl;
  cout << "C's func called " << countC << " times" << endl;
 }
};

int main()
{
 int new_val;
 cin >> new_val;

 D d;                   // Create an object of class D
 d.update_val(new_val); // Update val to new_val
 d.display();           // Display the result and function call counts

 return 0;
}
