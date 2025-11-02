#include <iostream>
#include <string>
using namespace std;

class I_login {
protected:
    string name;

public:
    
    virtual void accept() {
        cout << "\nEnter Name: ";
        cin >> name;
    }

    virtual void display() {
        cout << "\nName: " << name << endl;
    }
};

class email_login : public I_login {
protected:
    string email;
    string password;

public:
    void accept() override {
        I_login::accept(); 
        cout << "Enter Email: ";
        cin >> email;
        cout << "Enter Password: ";
        cin >> password;
    }

    void display() override {
        I_login::display();
        cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;
    }
};


class membership_login : public email_login {
    int member_id;

public:
    void accept() override {
        email_login::accept(); 
        cout << "Enter Member ID: ";
        cin >> member_id;
    }

    void display() override {
        cout << "\nMembership Login Details: " << endl;
        email_login::display(); 
        cout << "Member ID: " << member_id << endl;
    }
};

int main() {

    membership_login m;
    m.accept();
    m.display();

    I_login* login = new membership_login();
    login->accept();
    login->display();
    delete login;
    email_login e;
    e.accept();
    e.display();

    return 0;
}
