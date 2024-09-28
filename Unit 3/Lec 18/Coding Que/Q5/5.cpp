#include <iostream>
#include <fstream>
#include <string>
int main()
{
 std::string name;
 // Taking user input
 std::getline(std::cin, name);
 // Check the length of the name
 if (name.length() < 1 || name.length() > 100)
 {
  std::cerr << "Error: Name length must be between 1 and 100 characters." << std::endl;
  return 1;
 }
 // Writing the name to the file
 std::ofstream outFile("gfg.data");
 if (outFile)
 {
  outFile << name;
  outFile.close();
 }
 else
 {
  std::cerr << "Error: Unable to open the file for writing." << std::endl;
  return 1;
 }

 // Reading the name back from the file
 std::ifstream inFile("gfg.data");
 if (inFile)
 {
  std::string storedName;
  std::getline(inFile, storedName);
  std::cout << storedName << std::endl;
  inFile.close();
 }
 else
 {
  std::cerr << "Error: Unable to open the file for reading." << std::endl;
  return 1;
 }
 return 0;
}