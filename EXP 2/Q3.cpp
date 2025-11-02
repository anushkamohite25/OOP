#include <iostream>
#include <string>
using namespace std;

class Staff {
public:
    string name;
    string post;

    void accept() {
        cout << "Enter staff name: ";
        getline(cin, name);
        cout << "Enter post: ";
        getline(cin, post);
    }

   
    void displayIfHOD() {
        if (post == "HOD" || post == "hod") {
            cout << name << " is HOD" << endl;
        }
    }
};

int main() {
    Staff s[5]; 
    cin.ignore();
    for (int i = 0; i < 5; i++) {
        cout << "Staff " << i + 1 << ": " << endl;
        s[i].accept();
    }

    
    cout << "List of staff who are HOD:" << endl;
    for (int i = 0; i < 5; i++) {
        s[i].displayIfHOD();
    }

    return 0;
}
