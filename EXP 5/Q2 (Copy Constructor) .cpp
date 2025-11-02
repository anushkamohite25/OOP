#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float percentage;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        percentage = 0.0;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        percentage = s.percentage;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    // Using default constructor
    Student student1;

    // Using copy constructor
    Student student2(student1);

    cout << "--- Student 1 (Default) ---\n";
    student1.display();

    cout << "\n--- Student 2 (Copied from Student 1) ---\n";
    student2.display();

    return 0;
}
