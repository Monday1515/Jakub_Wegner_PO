#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    int currentYear;

public:
    Car(string make, string model, int year, int currentYear) : make(make), model(model), year(year), currentYear(currentYear) {}

    int getCarAge() const {
        return currentYear - year;
    }

    void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020, 2024);
    myCar.displayInfo();
    cout << "Car age: " << myCar.getCarAge() << " years" << endl;
    return 0;
}
