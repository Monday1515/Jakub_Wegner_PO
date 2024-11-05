#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Parrot {
private:
    vector<string> phrases;

public:
    Parrot(const string& initialPhrase) {
        phrases.push_back(initialPhrase);
    }

    void say(int repeatCount = 1) const {
        srand(time(0));
        string phrase = phrases[rand() % phrases.size()];
        for (int i = 0; i < repeatCount; ++i) {
            cout << phrase << endl;
        }
    }

    void addPhrase(const string& newPhrase) {
        phrases.push_back(newPhrase);
    }
};

int main() {
    Parrot myParrot("Hello!");
    myParrot.say();
    myParrot.addPhrase("I'm a parrot!");
    myParrot.say(3);
    return 0;
}
