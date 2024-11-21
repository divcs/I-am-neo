#include <iostream>
#include <cstring>
using namespace std;

struct User
{
 char *username;
 char *encryptedPassword;
};

class UserManagement
{
private:
 User *users[10];
 int userCount;

 // Encrypts the password by shifting each character by a fixed value
 char *encryptPassword(const char *password)
 {
  int len = strlen(password);
  char *encrypted = new char[len + 1];
  for (int i = 0; i < len; ++i)
  {
   encrypted[i] = password[i] + 3; // Shift each character by 3
  }
  encrypted[len] = '\0';
  return encrypted;
 }

 // Decrypts the password by reversing the character shift
 char *decryptPassword(const char *encryptedPassword)
 {
  int len = strlen(encryptedPassword);
  char *decrypted = new char[len + 1];
  for (int i = 0; i < len; ++i)
  {
   decrypted[i] = encryptedPassword[i] - 3; // Reverse shift by 3
  }
  decrypted[len] = '\0';
  return decrypted;
 }

public:
 UserManagement() : userCount(0)
 {
  for (int i = 0; i < 10; ++i)
   users[i] = nullptr;
 }

 ~UserManagement()
 {
  for (int i = 0; i < userCount; ++i)
  {
   delete[] users[i]->username;
   delete[] users[i]->encryptedPassword;
   delete users[i];
  }
 }

 // Registers a new user with encrypted password
 void registerUser(const char *username, const char *password)
 {
  if (userCount >= 10)
  {
   cout << "Maximum users reached" << endl;
   return;
  }

  // Check if the username already exists
  for (int i = 0; i < userCount; ++i)
  {
   if (strcmp(users[i]->username, username) == 0)
   {
    cout << "Username already exists" << endl;
    return;
   }
  }

  User *newUser = new User;
  newUser->username = new char[strlen(username) + 1];
  strcpy(newUser->username, username);
  newUser->encryptedPassword = encryptPassword(password);

  users[userCount++] = newUser;
 }

 // Retrieves and displays the decrypted password for a given username
 void retrievePassword(const char *username)
 {
  for (int i = 0; i < userCount; ++i)
  {
   if (strcmp(users[i]->username, username) == 0)
   {
    char *decryptedPassword = decryptPassword(users[i]->encryptedPassword);
    cout << "Password for user '" << username << "' is: " << decryptedPassword << endl;
    delete[] decryptedPassword;
    return;
   }
  }
  cout << "User not found" << endl;
 }
};

int main()
{
 UserManagement userManager;
 int choice;
 char username[50], password[50];

 while (true)
 {
  cin >> choice;
  switch (choice)
  {
  case 1:
   cin >> username >> password;
   userManager.registerUser(username, password);
   break;
  case 2:
   cin >> username;
   userManager.retrievePassword(username);
   break;
  case 3:
   return 0;
  default:
   cout << "Invalid choice" << endl;
  }
 }
}
