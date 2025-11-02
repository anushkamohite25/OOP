#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int numA;

public:
    void input() {
        cout << "Enter number for A: ";
        cin >> numA;
    }

    void display() {
        cout << "A: " << numA << endl;
    }

    // Friend function declaration
    friend void swap(A &x, B &y);
};

class B {
private:
    int numB;

public:
    void input() {
        cout << "Enter number for B: ";
        cin >> numB;
    }

    void display() {
        cout << "B: " << numB << endl;
    }

    // Friend function declaration
    friend void swap(A &x, B &y);
};

// Definition of friend function
void swap(A &x, B &y) {
    int temp = x.numA;
    x.numA = y.numB;
    y.numB = temp;
}

int main() {
    A a;
    B b;

    cout << "Enter first number (for A): ";
    a.input();

    cout << "Enter second number (for B): ";
    b.input();

    swap(a, b);

    cout << "After swapping:" << endl;
    a.display();
    b.display();

    return 0;
}
