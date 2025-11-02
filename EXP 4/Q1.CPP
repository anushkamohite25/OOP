#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    void getValue() {
        cout << "Enter value: ";
        cin >> value;
    }

    void display() {
        cout << value << endl;
    }

    void swapValues(Number &obj) {
        int temp = value;
        value = obj.value;
        obj.value = temp;
    }
};

int main() {
    Number n1, n2;
    n1.getValue();
    n2.getValue();

    cout << "\nBefore swapping:" << endl;
    cout << "n1 = " << n1.display();
    cout << "n2 = " << n2.display();

    n1.swapValues(n2);

    cout << "\nAfter swapping:" << endl;
    cout << "n1 = " << n1.display();
    cout << "n2 = " << n2.display();

    return 0;
}
