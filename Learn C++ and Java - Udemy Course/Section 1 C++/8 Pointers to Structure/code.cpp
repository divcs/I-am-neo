#include <iostream>
#include <cstring>
using namespace std;

void printBook(struct Books *book);
// or this, both are correct
// void printBook(struct Books *);

struct Books
{
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
};

int main()
{
 struct Books Book1; // Declare Book1 of type Book
 struct Books Book2; // Declare Book2 of type Book

 // Book 1 specification
 strcpy(Book1.title, "C Programming");
 strcpy(Book1.author, "Nuha Ali");
 strcpy(Book1.subject, "Programming");
 Book1.book_id = 6495407;

 // Book 2 specification
 strcpy(Book2.title, "Telecom Billing");
 strcpy(Book2.author, "Zara Ali");
 strcpy(Book2.subject, "Billing");
 Book2.book_id = 6495700;

 // print book 1 info, passing address of structure
 printBook(&Book1);
 printBook(&Book2);

 return 0;
}

// this func accept pointer to structure as parameter
void printBook(struct Books *book)
{
 cout << "Book title : " << book->title << endl;
 cout << "Book author : " << book->author << endl;
 cout << "Book subject : " << book->subject << endl;
 cout << "Book ID : " << book->book_id << endl;
}