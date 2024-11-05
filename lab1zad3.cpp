#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(string make, string model, int year) : make(make), model(model), year(year) {}

    bool isSameCar(const Car& otherCar) const {
        return make == otherCar.make && model == otherCar.model && year == otherCar.year;
    }

    void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", "Corolla", 2020);
    Car car2("Toyota", "Corolla", 2020);

    car1.displayInfo();
    car2.displayInfo();

    if (car1.isSameCar(car2)) {
        cout << "Cars are the same." << endl;
    } else {
        cout << "Cars are different." << endl;
    }
    return 0;
}
