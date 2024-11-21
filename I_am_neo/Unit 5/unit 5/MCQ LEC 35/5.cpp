#include <iostream>
using namespace std;

class City {
public:
    string name;
    City* nextCity;

    City(string n) : name(n), nextCity(nullptr) {}
};

int main() {
    City city1("New York");
    City city2("Los Angeles");
    City city3("Chicago");
    city1.nextCity = &city2;
    city2.nextCity = &city3;
    cout << city1.nextCity->nextCity->name;
    return 0;
}