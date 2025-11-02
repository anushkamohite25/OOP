#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;

public:
    void setStudentDetails(string n, int a, int r) {
        setPersonDetails(n, a);
        rollNumber = r;
    }

    void displayStudentDetails() {
        displayPersonDetails();   
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s1;
    string name;
    int age, roll;

    cout << "Enter Name: ";
    getline(cin, name);   
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Roll Number: ";
    cin >> roll;

    s1.setStudentDetails(name, age, roll);

    cout << "\n--- Student Details ---" << endl;
    s1.displayStudentDetails();

    return 0;
}
