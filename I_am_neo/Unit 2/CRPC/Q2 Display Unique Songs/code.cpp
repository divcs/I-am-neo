#include <iostream>
using namespace std;

void removeDuplicates(int *arr, int N)
{
 bool found[1001] = {false}; // Array to track the occurrence of each song ID (1 ≤ song ID ≤ 1000)

 for (int i = 0; i < N; i++)
 {
  int songID = *(arr + i); // Access array element using pointer
  if (!found[songID])
  {
   cout << songID << " "; // Print unique song ID
   found[songID] = true;  // Mark the song ID as found
  }
 }
 cout << endl;
}

int main()
{
 int T; // Number of test cases
 cin >> T;

 while (T--)
 {
  int N; // Number of songs in the playlist
  cin >> N;
  int arr[N]; // Array to store song IDs

  for (int i = 0; i < N; i++)
  {
   cin >> arr[i]; // Input song IDs
  }

  removeDuplicates(arr, N); // Call function to remove duplicates and print unique song IDs
 }

 return 0;
}
