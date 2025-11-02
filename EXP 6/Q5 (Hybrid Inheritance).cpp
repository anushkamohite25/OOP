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
protected:
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

class Sports {
protected:
    int sportsScore;

public:
    void setSportsScore(int s) {
        sportsScore = s;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Academics {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void displayMarks() {
        cout << "Academic Marks: " << marks << endl;
    }
};

class Result : public Student, public Sports, public Academics {
private:
    int total;

public:
    void setResult(string n, int a, int r, int m, int s) {
        setStudentDetails(n, a, r);
        setMarks(m);
        setSportsScore(s);
    }

    void calculateTotal() {
        total = marks + sportsScore;
    }

    void displayResult() {
        displayStudentDetails();
        displayMarks();
        displaySportsScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    string name;
    int age, roll, marks, sports;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Academic Marks: ";
    cin >> marks;
    cout << "Enter Sports Score: ";
    cin >> sports;

    r.setResult(name, age, roll, marks, sports);
    r.calculateTotal();

    cout << "\n--- Student Result ---" << endl;
    r.displayResult();

    return 0;
}
