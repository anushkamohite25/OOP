#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float percentage;

public:

    Student(string n, float p) {
        name = n;
        percentage = p;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    string studentName;
    float studentPercentage;

    cout << "Enter student's name: ";
    getline(cin, studentName);
    cout << "Enter student's percentage: ";
    cin >> studentPercentage;

    Student student1(studentName, studentPercentage);

    student1.display();

    return 0;
}
