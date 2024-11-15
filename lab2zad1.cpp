#include <iostream>
#include <string>
using namespace std;

class Samochod {
private:
    string marka;
    string model;
    int rokProdukcji;

public:
    Samochod(string marka, string model, int rokProdukcji)
        : marka(marka), model(model), rokProdukcji(rokProdukcji) {}

    Samochod()
        : marka("Nieznana"), model("Nieznany"), rokProdukcji(0) {}

    ~Samochod() {
        cout << "Destruktor wywołany dla: " << marka << " " << model << endl;// informacja o likwidacji obiektu?
    }

    void displayInfo() const {
        cout << "Marka: " << marka << ", Model: " << model << ", Rok produkcji: " << rokProdukcji << endl;
    }
};

int main() {
    Samochod samochod1("Toyota", "Corolla", 2020);
    samochod1.displayInfo();

    Samochod samochod2;
    samochod2.displayInfo();

    return 0;
}
