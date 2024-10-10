/*

Create a class named "Money" with the attributes "rupee" and "paise". Implement a constructor that initializes rupees and paise with default values of 0.



Create member functions setRupee() and setPaise() to set the values, and getRupee() and getPaise() to retrieve them. If the paise exceeds 99, increment rupees by 1 and adjust the paise.

Input format :
The input consists of two amounts in each line, rupee (integer) and paise (integer), separated by a space in each line.

Output format :
The output prints two integers separated by a period (.), representing the sum of rupees and paise, respectively.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0 ≤ rupee ≤ 105

0 ≤ paise ≤ 99

Sample test cases :
Input 1 :
50 85
42 65
Output 1 :
93.50
Input 2 :
254 45
845 20
Output 2 :
1099.65
Input 3 :
50 99
50 90
Output 3 :
101.89
Input 4 :
10 90
42 50
Output 4 :
53.40
*/

#include <iostream>

class Money
{
public:
 int rupee;
 int paise;

 Money()
 {
  rupee = 0;
  paise = 0;
 }

 void setRupee(int r)
 {
  rupee = r;
 }

 void setPaise(int p)
 {
  paise = p;
  while (paise >= 100)
  {
   rupee++;
   paise -= 100;
  }
 }

 int getRupee()
 {
  return rupee;
 }

 int getPaise()
 {
  return paise;
 }
};

int main()
{
 int r1, p1, r2, p2;

 while (std::cin >> r1 >> p1 >> r2 >> p2)
 {
  Money money1, money2, sum;

  money1.setRupee(r1);
  money1.setPaise(p1);

  money2.setRupee(r2);
  money2.setPaise(p2);

  sum.setRupee(money1.getRupee() + money2.getRupee());
  sum.setPaise(money1.getPaise() + money2.getPaise());

  std::cout << sum.getRupee() << "." << sum.getPaise() << std::endl;
 }

 return 0;
}