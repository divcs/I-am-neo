// #include <iostream>
// using namespace std;
// void loan_approval(int credit_score, float annual_income, float debt_to_income_ratio)
// {

//  if (credit_score > 650 && annual_income >= 30000 && debt_to_income_ratio < 0.4)
//  {
//   cout << "Loan approved!";
//  }
//  else
//   cout << "Loan denied!";
// }
// int main()
// {

//  int credit_score;
//  float income;
//  float expense;
//  float annual_income;
//  float debt;
//  float debt_to_income_ratio;

//  cout << "Enter your credit_score:";
//  cin >> credit_score;

//  cout << "Enter your monthly income: " << income;
//  cin >> income;

//  annual_income = income * 12;

//  cout << "Enter your expense:";
//  cin >> expense;

//  if (expense > annual_income)
//  {
//   debt = expense - annual_income;
//   debt_to_income_ratio = debt / annual_income;
//  }

//  loan_approval(credit_score, annual_income, debt_to_income_ratio);
//  return 0;
// }

#include <iostream>
using namespace std;

int loan_approval(int credit_score, float annual_income, float debt_to_income_ratio)
{

  if (credit_score > 650 && annual_income >= 30000 && debt_to_income_ratio < 0.4)
    cout << "Loan approved!";
  else
    cout << "Loan denied!";
}

int main()
{
  int credit_score;
  float annual_income, debt_to_income_ratio;

  cout << "Enter credit score: ";
  cin >> credit_score;

  cout << "Enter annual income: ";
  cin >> annual_income;

  cout << "Enter debt to income ratio: ";
  cin >> debt_to_income_ratio;

  loan_approval(credit_score, annual_income, debt_to_income_ratio);

  return 0;
}