#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits> // for numeric_limits

using namespace std;

struct Contact
{
 string name;
 string phoneNumber;
 string email;
};

// Function to add a new contact
void addContact(vector<Contact> &contacts)
{
 Contact newContact;
 cout << "Enter name: ";
 cin.ignore();
 getline(cin, newContact.name);
 cout << "Enter phone number: ";
 getline(cin, newContact.phoneNumber);
 cout << "Enter email: ";
 getline(cin, newContact.email);
 contacts.push_back(newContact);
 cout << "Contact added successfully.\n";
}

// Function to display all contacts
void displayContacts(const vector<Contact> &contacts)
{
 if (contacts.empty())
 {
  cout << "No contacts available.\n";
  return;
 }
 cout << "Displaying all contacts:\n";
 for (const auto &contact : contacts)
 {
  cout << "Name: " << contact.name << "\n"
       << "Phone Number: " << contact.phoneNumber << "\n"
       << "Email: " << contact.email << "\n\n";
 }
}

// Function to search for a contact by name
void searchContact(const vector<Contact> &contacts)
{
 string name;
 cout << "Enter the name to search: ";
 cin.ignore();
 getline(cin, name);

 bool found = false;
 for (const auto &contact : contacts)
 {
  if (contact.name == name)
  {
   cout << "Contact found:\n";
   cout << "Name: " << contact.name << "\n"
        << "Phone Number: " << contact.phoneNumber << "\n"
        << "Email: " << contact.email << "\n";
   found = true;
   break;
  }
 }
 if (!found)
 {
  cout << "No contact found with the name " << name << ".\n";
 }
}

// Function to modify an existing contact by name
void modifyContact(vector<Contact> &contacts)
{
 string name;
 cout << "Enter the name of the contact to modify: ";
 cin.ignore();
 getline(cin, name);

 bool found = false;
 for (auto &contact : contacts)
 {
  if (contact.name == name)
  {
   cout << "Contact found. Enter new details:\n";
   cout << "Enter new name: ";
   getline(cin, contact.name);
   cout << "Enter new phone number: ";
   getline(cin, contact.phoneNumber);
   cout << "Enter new email: ";
   getline(cin, contact.email);
   cout << "Contact modified successfully.\n";
   found = true;
   break;
  }
 }
 if (!found)
 {
  cout << "No contact found with the name " << name << ".\n";
 }
}

// Function to delete a contact by name
void deleteContact(vector<Contact> &contacts)
{
 string name;
 cout << "Enter the name of the contact to delete: ";
 cin.ignore();
 getline(cin, name);

 auto it = contacts.begin();
 while (it != contacts.end())
 {
  if (it->name == name)
  {
   contacts.erase(it);
   cout << "Contact deleted successfully.\n";
   return;
  }
  ++it;
 }
 cout << "No contact found with the name " << name << ".\n";
}

// Function to save contacts to a file
void saveContactsToFile(const vector<Contact> &contacts, const string &filename)
{
 ofstream file(filename);
 if (!file)
 {
  cout << "Error opening file for saving.\n";
  return;
 }
 for (const auto &contact : contacts)
 {
  file << contact.name << "\n"
       << contact.phoneNumber << "\n"
       << contact.email << "\n";
 }
 file.close();
 cout << "Contacts saved to " << filename << " successfully.\n";
}

// Function to load contacts from a file
void loadContactsFromFile(vector<Contact> &contacts, const string &filename)
{
 ifstream file(filename);
 if (!file)
 {
  cout << "Error opening file for loading.\n";
  return;
 }
 Contact contact;
 while (getline(file, contact.name) && getline(file, contact.phoneNumber) && getline(file, contact.email))
 {
  contacts.push_back(contact);
 }
 file.close();
 cout << "Contacts loaded from " << filename << " successfully.\n";
}

// Function to safely get a numeric choice from the user
int getChoice()
{
 int choice;
 while (true)
 {
  cout << "\nEnter your choice: ";
  if (cin >> choice)
  { // Check if input is an integer
   break;
  }
  else
  {
   cout << "Invalid input. Please enter a number.\n";
   cin.clear();                                         // Clear error flag
   cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
  }
 }
 return choice;
}

int main()
{
 vector<Contact> contacts;
 string filename = "contacts.txt";

 loadContactsFromFile(contacts, filename);

 int choice;
 do
 {
  cout << "\n--- Telephone Directory System ---\n";
  cout << "1. Add Contact\n";
  cout << "2. Display All Contacts\n";
  cout << "3. Search Contact\n";
  cout << "4. Modify Contact\n";
  cout << "5. Delete Contact\n";
  cout << "6. Save Contacts\n";
  cout << "7. Exit\n";

  choice = getChoice();

  switch (choice)
  {
  case 1:
   addContact(contacts);
   break;
  case 2:
   displayContacts(contacts);
   break;
  case 3:
   searchContact(contacts);
   break;
  case 4:
   modifyContact(contacts);
   break;
  case 5:
   deleteContact(contacts);
   break;
  case 6:
   saveContactsToFile(contacts, filename);
   break;
  case 7:
   cout << "Exiting program...\n";
   saveContactsToFile(contacts, filename);
   break;
  default:
   cout << "Invalid choice. Please try again.\n";
  }
 } while (choice != 7);

 return 0;
}

// to improve

// Enter your choice : 1
// Enter name : test
// Enter phone number : test
// Enter email : test
// Contact added successfully.

// 2 when asked to modify or where it requires to provide 'name' if a user doesn't remember the name then it should first display all the records so that he can get the name to search/modify/delete the record of.