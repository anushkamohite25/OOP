#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void accept() {
        cout << "Enter Real part: ";
        cin >> real;
        cout << "Enter Imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }

    // Friend function declaration
    friend Complex addComplex(Complex, Complex);
};

// Definition of friend function
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex num1, num2, sum;

    cout << "Enter first Complex Number:" << endl;
    num1.accept();

    cout << "Enter second Complex Number:" << endl;
    num2.accept();

    sum = addComplex(num1, num2);

    cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}
