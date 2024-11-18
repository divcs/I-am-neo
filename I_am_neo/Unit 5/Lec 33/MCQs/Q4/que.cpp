#include <iostream>
#include <cstring>
class Music
{
public:
 Music() : title(new char[20]) {}
 virtual ~Music() { delete[] title; }
 void SetTitle(const char *newTitle)
 {
  title = new char[strlen(newTitle) + 1];
  strcpy(title, newTitle);
 }
 void DisplayTitle()
 {
  std::cout << "Title: " << title;
 }

private:
 char *title;
};
int main()
{
 Music music;
 music.SetTitle("Symphony No. 9");
 music.DisplayTitle();
 return 0;
}

/*

    Answer here
        The code will output "Title: Symphony No. 9" without any allocation failure. (correct)
        The code will output "Title: Symphony No. 9" but encounter an allocation failure during the SetTitle() function.
        The code will result in a segmentation fault due to an allocation failure during the SetTitle() function.
        The code will result in a compilation error due to an invalid usage of strcpy.
*/