#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll_no;
    string name;
    string student_class;

public:
    void accept() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll no: ";
        cin >> roll_no;
        cout << "Enter Class: ";
        cin >> student_class;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Class: " << student_class << endl;
    }
};

int main() {
    Student s1;
    cout << "Enter Student details:" << endl;
    s1.accept();
    s1.display();
    return 0;
}
