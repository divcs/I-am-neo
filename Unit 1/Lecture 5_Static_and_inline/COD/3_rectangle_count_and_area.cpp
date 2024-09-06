// 

#include <iostream>
using namespace std;
class Rectangle
{
private:
 static int count;
 int length;
 int width;

public:
 Rectangle()
 {
  count++;
 }
 static int getCount()
 {
  return count;
 }
 void setDimensions(int l, int w)
 {
  length = l;
  width = w;
 }

 int getArea()
 {
  return length * width;
 }
};
int Rectangle::count = 0;
int main()
{
 int n;
 cin >> n;
 Rectangle rectangles[n];
 for (int i = 0; i < n; i++)
 {
  int length, width;
  cin >> length >> width;
  rectangles[i].setDimensions(length, width);
 }
 cout << "Total number of rectangles: " << Rectangle::getCount() << endl;
 for (int i = 0; i < n; i++)
 {
  cout << "Area of rectangle " << (i + 1) << ": " << rectangles[i].getArea() << endl;
 }
 return 0;
}