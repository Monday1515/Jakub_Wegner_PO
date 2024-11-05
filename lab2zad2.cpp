#include <iostream>
using namespace std;

class Tablica {
private:
    int* tablica;
    int rozmiar;

public:
    Tablica() : rozmiar(10) {
        tablica = new int[rozmiar];
        cout << "Tablica o rozmiarze 10 została utworzona." << endl;
    }

    Tablica(int rozmiar) : rozmiar(rozmiar) {
        tablica = new int[rozmiar];
        cout << "Tablica o rozmiarze " << rozmiar << " została utworzona." << endl;
    }

    ~Tablica() {
        delete[] tablica;
        cout << "Pamięć została zwolniona." << endl;
    }

    void setElement(int index, int value) {
        if (index >= 0 && index < rozmiar) {
            tablica[index] = value;
        }
    }

    void display() const {
        for (int i = 0; i < rozmiar; ++i) {
            cout << tablica[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Tablica tab1;
    tab1.setElement(0, 10);
    tab1.display();

    Tablica tab2(5);
    tab2.setElement(2, 20);
    tab2.display();

    return 0;
}
