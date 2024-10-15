
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