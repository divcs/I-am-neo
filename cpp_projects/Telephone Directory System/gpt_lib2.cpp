#include <fstream>
#include <iostream>
#include <cstring>
#include <conio.h> // If clrscr(), gotoxy() and getch() are available

using namespace std;

// Assuming 'Person' is the structure or class for the data
// Define it according to your needs
struct Person
{
 unsigned long record_id;
 char person_name[20];
 long off_phone1, off_phone2, res_phone1;
 long off_fax;
 // other fields as necessary
} pers;

void show_data()
{
 // Implement this function to display 'pers' data
}

// Define pa2 as the file path
const char *pa2 = "datafile.dat"; // Change to your file path

void search_object()
{
 fstream file;
 unsigned long rec;
 long phno = 0, faxno = 0;
 char name[20];
 int ch;

 do
 {
  system("CLS"); // Replace clrscr() for clearing the screen
  int count = 0; // Reset count for each new search

  cout << "\n\t SEARCH MENU\n";
  cout << "==============================\n";
  cout << "1. Search by Record ID No.\n";
  cout << "2. Search by Name\n";
  cout << "3. Search by Phone No.\n";
  cout << "4. Search by Fax No.\n";
  cout << "5. Search by Email No.\n";
  cout << "6. Exit\n";
  cout << "Enter the field to Search: ";
  cin >> ch;

  switch (ch)
  {
  case 1:
   system("CLS");
   cout << "Enter the Record ID No. to Search: ";
   cin >> rec;

   file.open(pa2, ios::in);
   if (!file)
   {
    cout << "Error opening file!" << endl;
    break;
   }
   file.seekg(0, ios::beg);

   while (file.read((char *)&pers, sizeof(pers)))
   {
    if (pers.record_id == rec)
    {
     count++;
     show_data();
     getch();
    }
   }
   file.close();
   cout << "Records Found = " << count << endl;
   getch();
   break;

  case 2:
   system("CLS");
   cout << "Enter the Person's Name to Search: ";
   cin.ignore(); // Clear buffer before using getline
   cin.getline(name, sizeof(name));

   file.open(pa2, ios::in);
   if (!file)
   {
    cout << "Error opening file!" << endl;
    break;
   }

   while (file.read((char *)&pers, sizeof(pers)))
   {
    if (strcmpi(name, pers.person_name) == 0)
    {
     count++;
     show_data();
     getch();
    }
   }
   file.close();
   cout << "Records Found = " << count << endl;
   getch();
   break;

  case 3:
   // Similar structure for Phone No. search
   break;

  case 4:
   // Similar structure for Fax No. search
   break;

  case 6:
   cout << "Exiting..." << endl;
   break;

  default:
   cout << "Invalid choice, try again." << endl;
  }
 } while (ch != 6);
}
