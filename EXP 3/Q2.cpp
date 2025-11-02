#include <iostream>
using namespace std;

class Student {
private:
    int roll_no;
    float percentage;

public:
    Student() {}

    void acceptData() {
        cout << "Enter roll number: ";
        cin >> this->roll_no;
        cout << "Enter percentage: ";
        cin >> this->percentage;
    }

    void displayData() {
        cout << "Roll Number: " << this->roll_no << endl;
        cout << "Percentage: " << this->percentage << endl;
    }
};

int main() {
    Student student;

    cout << "Enter student details:" << endl;
    student.acceptData();

    cout << "\nDisplaying student details:" << endl;
    student.displayData();

    return 0;
}
