#include <iostream>
#include <cstring>

class Car {
public:
    Car() : model(new char[10]) {}
    virtual ~Car() { delete[] model; }

    void SetModel(const char* newModel) {
        strcpy(model, newModel);
    }

    void DisplayModel() {
        std::cout << "Model: " << model << std::endl;
    }

private:
    char* model;
};

int main() {
    Car car;
    car.SetModel("Sedan");
    car.DisplayModel();
    return 0;
}

he code will output "Model: Sedan" without any allocation failure.


The code will output "Model: Sedan" but encounter an allocation failure during the SetModel() function.


The code will result in a segmentation fault due to an allocation failure during the SetModel() function.


The code will result in a compilation error due to an invalid strcpy operation.