#include <iostream>
#include <iomanip>
using namespace std;

// Base class: Chef
class Chef
{
protected:
 int dishes;

public:
 // Constructor to initialize dishes
 Chef(int n) : dishes(n) {}

 // Getter for dishes
 int getDishes() const
 {
  return dishes;
 }
};

// Base class: Waiter
class Waiter
{
protected:
 int tables;

public:
 // Constructor to initialize tables
 Waiter(int m) : tables(m) {}

 // Getter for tables
 int getTables() const
 {
  return tables;
 }
};

// Derived class: Manager
class Manager : public Chef, public Waiter
{
public:
 // Constructor
 Manager(int n, int m) : Chef(n), Waiter(m) {}

 // Method to calculate and display results
 void displayResults()
 {
  int totalDishes = getDishes();
  int totalTables = getTables();

  // Calculate average if tables are served
  double averageDishesPerTable = (totalTables > 0) ? static_cast<double>(totalDishes) / totalTables : 0;

  // Update totals after adding 10
  totalDishes += 10;
  totalTables += 10;

  // Display results
  cout << fixed << setprecision(2);
  cout << "Dishes: " << getDishes() << " ";
  cout << "Average: " << averageDishesPerTable << " ";
  cout << "Total dishes: " << totalDishes << " ";
  cout << "Total tables: " << totalTables << endl;
 }
};

int main()
{
 int N, M;

 // Input
 cin >> N >> M;

 // Create Manager object and display results
 Manager manager(N, M);
 manager.displayResults();

 return 0;
}
