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

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    // Using default constructor
    Student student1;

    cout << "--- Student 1 (Default) ---\n";
    student1.display();

    return 0;
}
