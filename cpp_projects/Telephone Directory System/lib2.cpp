#include <fstream>
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

// function declaration for the search phone information: By using this function, the 'phone.dat' data file is searched according to RECORD ID NO., NAME, PHONE NO, FAX NO, EMAIL NO resp and displays all the records on the screen.

// 1 FUNCTION
void search_object() // search_phone_info #SUGGESTED NAME
{
 fstream file;
 unsigned long rec;
 long phno = 0, faxno = 0, mail = 0;
 char name[20];
 int ch;

 do
 {
  clrscr();
  int count = 0;
  box(10, 5, 67, 20);
  gotoxy(21, 7);
  cout << "\t SEARCH MENU";
  gotoxy(20, 8);
  cout << "==============================";

  gotoxy(20, 10);
  cout << "1. Search by Record ID No.";
  gotoxy(20, 11);
  cout << "2. Search by Name";
  gotoxy(20, 12);
  cout << "3. Search by Phone No.";
  gotoxy(20, 13);
  cout << "4. Search by Fax No.";
  gotoxy(20, 14);
  cout << "5. Search by Email No.";
  gotoxy(20, 15);
  cout << "6. Exit";
  gotoxy(20, 17);
  cout << "Enter the field to Search: ";
  gotoxy(20, 60);
  cin >> ch;

  switch (ch)
  {
  case 1:
   clrscr();
   gotoxy(20, 15);
   cout << "Enter the Record ID No. to Search:............. ";
   gotoxy(20, 60);
   cin >> rec;

   file.open(pa2, ios::in);
   file.seekg(0, ios::beg);
   file.read((char *)&pers, sizeof(pers));

   while (!file.eof())
   {
    if (pers.record_id == rec)
    {
     count++;
     show_data();
     getch();
    }
    file.read((char *)&pers, sizeof(pers));
   }
   file.close();
   gotoxy(24, 23);
   cout << "Records Found =" << count;
   getch();
   break;

  case 2:
   clrscr();
   gotoxy(20, 15);
   cout << "Enter the Person 's Name to Search:............. ";
   gotoxy(20, 60);
   // cin.ignore();
   gets(name);

   file.open(pa2, ios::in);
   file.seekg(0, ios::beg);
   file.read((char *)&pers, sizeof(pers));

   while (!file.eof())
   {
    if (strcmpi(name, pers.person_name) == 0)
    {
     count++;
     show_data();
     getch();
    }
    file.read((char *)&pers, sizeof(pers));
   }
   file.close();

   gotoxy(24, 23);
   cout << "Records Found =" << count;
   getch();
   break;

  case 3:
   clrscr();
   gotoxy(20, 15);
   cout << "Enter the Phone No. to Search:............. ";
   gotoxy(20, 60);
   cin >> phno;

   file.open(pa2, ios::in);
   file.seekg(0, ios::beg);
   file.read((char *)&pers, sizeof(pers));

   while (!file.eof())
   {
    if (pers.off_phone1 == phno || pers.off_phone2 == phno || pers.res_phone1 == phno)
    {
     count++;
     show_data();
     getch();
    }
    file.read((char *)&pers, sizeof(pers));
   }
   file.close();
   gotoxy(24, 23);
   cout << "Records Found =" << count;
   getch();
   break;

  case 4:
   clrscr();
   gotoxy(20, 15);
   cout << "Enter the Fax No. to Search:............. ";
   gotoxy(20, 60);
   cin >> faxno;

   file.open(pa2, ios::in);
   file.seekg(0, ios::beg);
   file.read((char *)&pers, sizeof(pers));

   while (!file.eof())
   {
    if (pers.off_fax == faxno)
    {
     count++;
     show_data();
     getch();
    }
    file.read((char *)&pers, sizeof(pers));
   }
   file.close();
   gotoxy(24, 23);
  }
 }
}

// 2 FUNCTION
// sort_name(): this func sorts the name of telephone customers with the help of ex_change() function
void sort_name()
{
 make_index(); // call make index function

 for (ptr1 = first; (ptr1); ptr1 = ptr1->link)
 {
  for (ptr2 = ptr1->link; (ptr2); ptr2 = ptr2->link)
  {
   if (strcmpi(ptr2->name, ptr1->name) < 0)
   {
    ex_change();
   }
  }

  // this function sorts records acc to id no. wise with the help of ex_change() function

  void sort_recno()
  {
   make_index(); // call make index function
   for (ptr1 = first; (ptr1); ptr1 = ptr1->link)
   {
    for (ptr2 = ptr1->link; (ptr2); ptr2 = ptr2->link)
    {
     if (ptr2->recno < ptr1->recno)
     {
      ex_change();
     }
    }
    // this function sorts records acc to pincode wise with the help of ex_change() function

    void sort_pin()
    {
     make_index(); // call make index function
     for (ptr1 = first; ptr1 != NULL; ptr1 = ptr1->link)
     {
      for (ptr2 = ptr1->link; ptr2 != NULL; ptr2 = ptr2->link)
      {
       if (ptr2->pin < ptr1->pin)
       {
        ex_change();
       }
      }
     }
     // this function prints sorted record on the screen with the help of show_data() functions
     void sort_print()
     {
      fstream infile;
      ptr = first;
      while (ptr != NULL)
      {
       infile.open(pa2, ios::in);
       infile.seekg(0, ios::beg);
       infile.read((char *)&pers, sizeof(pers));
       while (!infile.eof())
       {
        if (ptr->recno == pers.record_id)
        {
         show_data();
         getch();
         infile.seekg(0, ios::end);
        }
        infile.read((char *)&pers, sizeof(pers));
       }
       infile.close();
       ptr = ptr->link;
      }
     }
     // this function is used to delete a linked node from main memory
     void del_index()
     {
      while (first != NULL)
      {
       ptr = first;
       first = first->link;
       delete ptr;
      }
     }
     // this function is used to list out the records on different way of sorting order. While executing this function it first displays a menu "SORT MENU" which shows different options for displaying records on the screen. When you select any option it'll display all the records acc to the option available with different functions

     void sort_object()
     {
      int ch;
      do
      {
       clrscr();
       box(10, 5, 67, 20);
       gotoxy(21, 7);
       cout << "\tSORT MENU";
       gotoxy(20, 8);
       cout << "==============================";
       gotoxy(20, 12);
       cout << "1. Sorted Record ID";
       gotoxy(20, 13);
       cout << "2. Sorted Name";
       gotoxy(20, 14);
       cout << "3. Sorted Pincode No.";
       gotoxy(20, 15);
       cout << "4. Exit";
       gotoxy(20, 18);
       cout << "Enter your choice............. ";
       gotoxy(20, 60);
       cin >> ch;
       switch (ch)
       {
       case 1:
        clrscr();
        sort_recno();
        sort_print();
        del_index();
        delay(200);
        break;
       case 2:
        clrscr();
        sort_name();
        sort_print();
        del_index();
        delay(200);
        break;
       case 3:
        clrscr();
        sort_pin();
        sort_print();
        del_index();
        delay(200);
        break;
       case 4:
        clrscr();
        break;
       }
      } while (ch != 4)
     }
     // this func is used to generate differnt reports as on screen:
     /*
     Report 1: List of names residence & office phone no
     Report 2: List of names office address & phone no
     Report 3: List of names records nos.& residence address
     */

     void reports()
     {
      fstream infile;
      int ch;
      do
      {
       clrscr();
       box(10, 5, 71, 20);
       gotoxy(24, 7);

       cout << "\tREPORT MENU";
       gotoxy(23, 8);
       cout << "==============================";
       gotoxy(15, 12);
       cout << "1. Report 1: List of Names Residence & Office Phone no";
       gotoxy(15, 13);
       cout << "2. Report 2: List of names office address & phone no";
       gotoxy(15, 14);
       cout << "3. Report 3: List of names records nos.& residence address";
       gotoxy(15, 15);
       cout << "4. Exit";
       gotoxy(22, 18);
       cout << "Enter your choice............. ";
       gotoxy(20, 60);
       cin >> ch;

       switch (ch)
       {
       case 1:
        clrscr();
        cout << "\n Name Residence Phone no. Office Phone no.";
        cout << "\n------------------------------------------";

        infile.open(pa2, ios::in);
        infile.seekg(0, ios::beg);
        // reads file from beginning
        infile.read((char *)&pers, sizeof(pers));
        cout << endl;
        while (!infile.eof())
        {
         cout << setiosflags(ios::left) << setw(28) << pers.person_name << setw(30) << pers.res_phone1 << setw(30) << pers.off_phone1 << endl;
         infile.read((char *)&pers, sizeof(pers));
        }
        infile.close();
        gotoxy(20, 24);
        cout << "Press any key to continue.................";
        getch();
        break;
       case 2:
        clrscr();
        cout << "\n Name     Company Name     Office Phone1";
        cout << "\n------------------------------------------";

        infile.open(pa2, ios::in);
        infile.seekg(0, ios::beg);
        // reads file from beginning
        infile.read((char *)&pers, sizeof(pers));

        while (!infile.eof())
        {
         cout << "\n";
         cout << setiosflags(ios::left) << setw(20) << pers.person_name << setw(25) << pers.company_name << setw(20) << pers.off_phone1 << endl;
         infile.read((char *)&pers, sizeof(pers));
        }
        infile.close();
        gotoxy(20, 24);
        cout << "Press any key to continue.................";
        getch();
        break;
       case 3:
        clrscr();
        int row = 4;
        cout << "\n Records No.     Person Name     Residence Address";
        cout << "\n------------------------------------------\n";
        infile.open(pa2, ios::in);
        infile.seekg(0, ios::beg);
        // reads file from beginning
        infile.read((char *)&pers, sizeof(pers));
        while (!infile.eof())
        {
         gotoxy(5, row);
         cout << pers.record_id;
         gotoxy(20, row);
         cout << pers.person_name;
         gotoxy(50, row);
         cout << pers.res_address;
         infile.read((char *)&pers, sizeof(pers));
         row++;
         // if display row greater than 23 then the row set to 4 again
         if (row >= 23)
         {
          cout << "Press any key to continue";

          getch();
          row = 4;
         }
        }
        infile.close();
        gotoxy(20, 24);
        cout << "Press any key to continue.................";
        getch();
        break;
       case 4:
        clrscr();
        break;
       }
      } while (ch != 4);
     }
    }