#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() { return a + b; }
    T sub() { return a - b; }
    T mul() { return a * b; }
    T div() { 
        if (b != 0) 
            return a / b; 
        else {
            cout << "Error! Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator<int> c1(10, 5);
    cout << "Addition = " << c1.add() << endl;
    cout << "Subtraction = " << c1.sub() << endl;
    cout << "Multiplication = " << c1.mul() << endl;
    cout << "Division = " << c1.div() << endl;

    return 0;
}



