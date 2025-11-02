#include <iostream>
using namespace std;

template <class T>
class Stack {
    T stk[10];
    int top;
public:
    Stack() { top = -1; }

    void push(T val) {
        if (top == 9)
            cout << "Stack Overflow!" << endl;
        else
            stk[++top] = val;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow!" << endl;
        else
            cout << "Popped: " << stk[top--] << endl;
    }

    void display() {
        if (top == -1)
            cout << "Stack is Empty!" << endl;
        else {
            cout << "Stack: ";
            for (int i = top; i >= 0; i--)
                cout << stk[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}
