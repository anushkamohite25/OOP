#include <iostream>
using namespace std;

class cube;

class box {
private:
    int volume;

public:
    void accept() {
        cout << "Enter the volume of Box: ";
        cin >> volume;
    }

    // Friend function declaration
    friend void findgreater(box, cube);
};

class cube {
private:
    int volume;

public:
    void accept() {
        cout << "Enter the volume of Cube: ";
        cin >> volume;
    }

    // Friend function declaration
    friend void findgreater(box, cube);
};

// Definition of friend function
void findgreater(box b, cube c) {
    if (b.volume > c.volume) {
        cout << "Volume of box is greater." << endl;
    }
    else if (c.volume > b.volume) {
        cout << "Volume of cube is greater." << endl;
    }
    else {
        cout << "Both volumes are equal." << endl;
    }
}

int main() {
    box b;
    cube c;

    b.accept();
    c.accept();

    findgreater(b, c);

    return 0;
}
