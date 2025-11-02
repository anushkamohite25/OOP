#include <iostream>
#include <string>
using namespace std;

class City {
public:
    string name;
    int population;

    void getData() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }

    void displayData() {
        cout << "City: " << name << ", Population: " << population << endl;
    }
};

int main() {
    City cities[5];
    int i, maxIndex = 0;

  
    for (i = 0; i < 5; i++) {
        cout << "\nEnter details for city " << i + 1 << ":\n";
        cities[i].getData();
    }

    for (i = 1; i < 5; i++) {
        if (cities[i].population > cities[maxIndex].population) {
            maxIndex = i;
        }
    }

    cout << "\nCity with the highest population:\n";
    cities[maxIndex].displayData();

    return 0;
}
