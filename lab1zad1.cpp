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

    void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020);
    myCar.displayInfo();
    return 0;
}
