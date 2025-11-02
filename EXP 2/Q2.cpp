#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    float balance;

    void accept() {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void giveInterest() {
        if (balance >= 5000) {
            balance += balance * 0.10; 
        }
    }

    void display() {
        if (balance >= 5000) {
            cout << "Account No: " << accNo << ", Updated Balance: " << balance << endl;
        }
    }
};

int main() {
    Account a[4];
    for (int i = 0; i < 4; i++) {
        cout << "Account " << i + 1 << ": " << endl;
        a[i].accept();
    }

    cout << "Updated:" << endl;
    for (int i = 0; i < 4; i++) {
        a[i].giveInterest();
        a[i].display();
    }

    return 0;
}
