#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string name;

public:
    void setEmployeeDetails(int id, string n) {
        empID = id;
        name = n;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void setManagerDetails(int id, string n, string d) {
        setEmployeeDetails(id, n);
        department = d;
    }

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
    }
};

class Developer : public Employee {
private:
    string programmingLanguage;

public:
    void setDeveloperDetails(int id, string n, string pl) {
        setEmployeeDetails(id, n);
        programmingLanguage = pl;
    }

    void displayDeveloperDetails() {
        displayEmployeeDetails();
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

int main() {
    Manager m;
    Developer d;

    int id;
    string name, dept, lang;

    cout << "Enter Manager ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Manager Name: ";
    getline(cin, name);
    cout << "Enter Department: ";
    getline(cin, dept);

    m.setManagerDetails(id, name, dept);

    cout << "\nEnter Developer ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Developer Name: ";
    getline(cin, name);
    cout << "Enter Programming Language: ";
    getline(cin, lang);

    d.setDeveloperDetails(id, name, lang);

    cout << "\n--- Manager Details ---" << endl;
    m.displayManagerDetails();

    cout << "\n--- Developer Details ---" << endl;
    d.displayDeveloperDetails();

    return 0;
}
