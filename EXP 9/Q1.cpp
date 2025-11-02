#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream new_file;
    new_file.open("new_file.txt", ios::out); // Open file in output mode (creates if not exists)

    if (!new_file) {
        cout << "File creation failed!" << endl;
    } else {
        cout << "New file created" << endl;
        new_file.close(); // Close the file
    }

    return 0;
}
