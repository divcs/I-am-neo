#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Function to filter unique elements and sort them
vector<int> getUniqueElements(const vector<int> &songsList)
{
 set<int> uniqueSongs(songsList.begin(), songsList.end());   // Removes duplicates and sorts
 return vector<int>(uniqueSongs.begin(), uniqueSongs.end()); // Convert set back to vector
}

int main()
{
 int N;
 cin >> N;

 vector<int> songsList(N);
 for (int i = 0; i < N; i++)
 {
  cin >> songsList[i];
 }

 vector<int> uniqueSongs = getUniqueElements(songsList);

 // Print the unique and sorted song IDs
 for (size_t i = 0; i < uniqueSongs.size(); i++)
 {
  cout << uniqueSongs[i];
  if (i != uniqueSongs.size() - 1)
  {
   cout << " ";
  }
 }
 cout << "\n";

 return 0;
}
