#include <iostream>
using namespace std;

class Number2;

class Number1 {
private:
    int num1;

public:
    void accept() {
        cout << "Enter number: ";
        cin >> num1;
    }

    // Friend function declaration
    friend void findGreatest(Number1, Number2);
};

class Number2 {
private:
    int num2;

public:
    void accept() {
        cout << "Enter number: ";
        cin >> num2;
    }

    // Friend function declaration
    friend void findGreatest(Number1, Number2);
};

// Definition of friend function
void findGreatest(Number1 a, Number2 b) {
    if (a.num1 > b.num2) {
        cout << "Greatest Number is: " << a.num1 << endl;
    }
    else if (b.num2 > a.num1) {
        cout << "Greatest Number is: " << b.num2 << endl;
    }
    else {
        cout << "Both are equal." << endl;
    }
}

int main() {
    Number1 obj1;
    Number2 obj2;

    obj1.accept();
    obj2.accept();

    findGreatest(obj1, obj2);

    return 0;
}
