#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }

    void display() {
        cout << value << endl;
    }

    // Friend function declaration
    friend void swap(Number &x, Number &y);
};


void swap(Number &x, Number &y) {
    int temp = x.value;
    x.value = y.value;
    y.value = temp;
}

int main() {
    Number n1, n2;

    cout << "Enter first Number: ";
    n1.input();

    cout << "Enter second Number: ";
    n2.input();

    swap(n1, n2);

    cout << "After swapping:" << endl;
    cout << "n1 = "; n1.display();
    cout << "n2 = "; n2.display();

    return 0;
}
