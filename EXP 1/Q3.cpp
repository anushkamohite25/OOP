#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
    int seconds;

public:
    void accept() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    int toSeconds() {
        return (hours * 3600) + (minutes * 60) + seconds;
    }

    void displaySeconds() {
        cout << "Total seconds: " << toSeconds() << endl;
    }
};

int main() {
    Time t1;
    t1.accept();
    t1.displaySeconds();
    return 0;
}
