Problem statement



Ria, a diligent student, is participating in a quiz competition where her final score will be determined based on her answers to four multiple-choice questions. The quiz scoring system is structured using two classes: QuizGame and StudentScore. The base class, QuizGame, defines a virtual method game() to display the score, while the derived class, StudentScore, overrides this method to implement specific scoring rules.



Ria’s answers are evaluated such that for every uppercase letter (A-Z) she gains 15 points, while for every lowercase letter (a-z) she loses 10 points.



Your task is to implement this system where the program accepts four characters as Ria’s answers, calculates her final score using the overridden method, and then displays the score through the base class's game() method.

Input format :
The input consists of four characters separated by a space.

Output format :
The output prints an integer representing the total score.



Refer to the sample output for the formatting specifications.

Code constraints :
The input should be a valid letter from the English alphabet (A to Z or a to z).

Sample test cases :
Input 1 :
A F K R
Output 1 :
Score: 60
Input 2 :
A b D f
Output 2 :
Score: 10
Input 3 :
e f g h
Output 3 :
Score: -40