#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float mark1, mark2, mark3;

public:
    void accept() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Marks in 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    // Friend function declaration
    friend void calculateAverage(Student);
};

// Definition of friend function
void calculateAverage(Student s) {
    float avg = (s.mark1 + s.mark2 + s.mark3) / 3.0;
    cout << "\nStudent Name: " << s.name << endl;
    cout << "Average Marks: " << avg << endl;
}

int main() {
    Student stu;

    stu.accept();
    calculateAverage(stu);

    return 0;
}
