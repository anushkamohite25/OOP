#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    void display() {
        cout << "Value: " << x << endl;
    }

    void operator++() {
        ++x;
    }
};

int main() {
    Number n(5);
    n.display();
    ++n;
    n.display();
    n++;
    n.display();
    return 0;
}
