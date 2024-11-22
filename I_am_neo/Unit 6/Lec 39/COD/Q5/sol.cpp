#include <iostream>
#include <vector>
using namespace std;

// Base template class for Queue
template <class T>
class QueueBase
{
protected:
 vector<T> q; // Vector to store the elements of the queue

public:
 // Function to enqueue an element
 void enqueue(T x)
 {
  q.push_back(x);
 }

 // Function to dequeue an element
 void dequeue()
 {
  if (!q.empty())
  {
   q.erase(q.begin()); // Remove the first element
  }
  else
  {
   cout << "Queue is empty. Cannot dequeue." << endl;
  }
 }

 // Function to display the elements of the queue
 void display()
 {
  if (q.empty())
  {
   cout << "Queue is empty";
  }
  else
  {
   for (T element : q)
   {
    cout << element << " ";
   }
  }
  cout << endl;
 }
};

// Derived template class inheriting from QueueBase
template <class T>
class Derived : public QueueBase<T>
{
};

int main()
{
 // Integer queue
 Derived<int> q1;
 int n;
 cin >> n;

 for (int i = 0; i < n; i++)
 {
  int x;
  cin >> x;
  q1.enqueue(x);
 }

 // Double queue
 Derived<double> q2;
 cin >> n;

 for (int i = 0; i < n; i++)
 {
  double x;
  cin >> x;
  q2.enqueue(x);
 }

 // Integer queue operations
 cout << "Queue elements: ";
 q1.display();
 cout << "Dequeueing an element from the integer queue" << endl;
 q1.dequeue();
 cout << "Queue elements: ";
 q1.display();

 // Double queue operations
 cout << "Queue elements: ";
 q2.display();
 cout << "Dequeueing an element from the double queue" << endl;
 q2.dequeue();
 cout << "Queue elements: ";
 q2.display();

 return 0;
}
