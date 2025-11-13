#include <iostream>
using namespace std;

class ClassB;
class ClassA {
private:
    int valueA;
public:
    void input() {
        cout << "Enter value of Class A: ";
        cin >> valueA;
    }
    friend int sum(ClassA, ClassB);
};
class ClassB {
private:
    int valueB;

public:
    void input() {
        cout << "Enter value of Class B: ";
        cin >> valueB;
    }
    friend int sum(ClassA, ClassB);
};

int sum(ClassA a, ClassB b) {
    return a.valueA + b.valueB;
}
int main() {
    ClassA objA;
    ClassB objB;
    objA.input();
    objB.input();
    int total = sum(objA, objB);
    cout << "Sum of values: " << total << endl;

    return 0;
}
