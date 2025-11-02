#include <iostream>
#include <string>
using namespace std;

class College {
private:
    int roll_no;
    string name;
    string course;

public:

    College(int r, string n, string c = "Computer Engineering") {
        roll_no = r;
        name = n;
        course = c;
    }

    void display() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int roll_no1, roll_no2;
    string name1, name2, course1, course2;

    cout << "Enter Roll No, Name and Course for first student:" << endl;
    cout << "Roll No: ";
    cin >> roll_no1;
    cin.ignore();  
    cout << "Name: ";
    getline(cin, name1);
    cout << "Course (Press Enter for default): ";
    getline(cin, course1);

    cout << "\nEnter Roll No, Name and Course for second student:" << endl;
    cout << "Roll No: ";
    cin >> roll_no2;
    cin.ignore();  
    cout << "Name: ";
    getline(cin, name2);
    cout << "Course (Press Enter for default): ";
    getline(cin, course2);

    College student1(roll_no1, name1, course1.empty() ? "Computer Engineering" : course1);
    College student2(roll_no2, name2, course2.empty() ? "Computer Engineering" : course2);


    cout << "\nStudent 1 Data:" << endl;
    student1.display();

    cout << "\nStudent 2 Data:" << endl;
    student2.display();

    return 0;
}
