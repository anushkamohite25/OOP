#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file1("file1.txt", ios::app);  
    if (!file1) {
        cout << "Error opening file1.txt" << endl;
        return 1;
    }

    file1 << "Welcome to MIT" << endl;
    file1.close();

    ifstream file1_read("file1.txt");
    ofstream file2("file2.txt");

    if (!file1_read) {
        cout << "Error opening file1.txt for reading" << endl;
        return 1;
    }

    if (!file2) {
        cout << "Error opening file2.txt for writing" << endl;
        return 1;
    }

    char ch;
    while (file1_read.get(ch)) {
        file2.put(ch);
    }

    cout << "Content copied successfully from file1.txt to file2.txt" << endl;

    file1_read.close();
    file2.close();

    return 0;
}
