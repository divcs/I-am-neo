#include <iostream>
#include <vector>
using namespace std;

// Function to remove all occurrences of a target value from the petDataList
void removeElement(vector<int> &petDataList, int target)
{
 vector<int> updatedList;

 // Iterate through the list and add elements not equal to target
 for (int id : petDataList)
 {
  if (id != target)
  {
   updatedList.push_back(id);
  }
 }

 // Print the updated list
 if (updatedList.empty())
 {
  cout << "\n";
 }
 else
 {
  for (size_t i = 0; i < updatedList.size(); i++)
  {
   cout << updatedList[i];
   if (i != updatedList.size() - 1)
   {
    cout << " ";
   }
  }
  cout << "\n";
 }
}

int main()
{
 int N, M;
 cin >> N;

 vector<int> petDataList(N);
 for (int i = 0; i < N; i++)
 {
  cin >> petDataList[i];
 }

 cin >> M;

 // Call the function to remove the target element
 removeElement(petDataList, M);

 return 0;
}
