#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
 // Step 1: Write initial data to the file
 fstream file("example.txt", ios::out | ios::trunc); // Open in write mode, truncating previous content
 if (file.is_open())
 {
  file << "Line 1\nLine 2\nLine 3\n";
  file.close();
 }
 else
 {
  cout << "Error creating the file." << endl;
  return 1;
 }

 // Step 2: Read file contents into a vector of strings
 vector<string> lines;
 file.open("example.txt", ios::in); // Open in read mode
 if (file.is_open())
 {
  string line;
  while (getline(file, line))
  {
   lines.push_back(line); // Store each line in a vector
  }
  file.close();
 }
 else
 {
  cout << "Error reading the file." << endl;
  return 1;
 }

 // Step 3: Modify specific lines in the vector
 if (lines.size() > 1)
 {
  lines[1] = "Updated Line 2"; // Modify the second line
 }

 // Step 4: Write updated content back to the file
 file.open("example.txt", ios::out | ios::trunc); // Open in write mode again to overwrite
 if (file.is_open())
 {
  for (const auto &l : lines)
  {
   file << l << endl; // Write each line from the vector to the file
  }
  file.close();
 }
 else
 {
  cout << "Error writing to the file." << endl;
  return 1;
 }

 // Step 5: Display the updated contents of the file
 file.open("example.txt", ios::in); // Open in read mode for displaying content
 if (file.is_open())
 {
  cout << "Contents of 'example.txt':" << endl;
  while (getline(file, line))
  {
   cout << line << endl; // Display each line read from the file
  }
  file.close();
 }
 else
 {
  cout << "Error displaying the file contents." << endl;
 }

 return 0;
}
