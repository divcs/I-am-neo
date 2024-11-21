#include <iostream>

class City {
public:
    City() { name = new char[20]; }
    ~City() { delete[] name; }

    void SetName(const char* newName) {
        name = new char[strlen(newName) + 1];
        strcpy(name, newName);
    }

    void DisplayName() {
        std::cout << "City: " << name << std::endl;
    }

private:
    char* name;
};

int main() {
    City city;
    city.SetName("Metropolis");
    city.DisplayName();
    return 0;
}