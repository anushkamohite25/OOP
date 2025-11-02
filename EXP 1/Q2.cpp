#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int b_pages;
    double b_price;
    string b_name;

public:
    void accept() {
        cout << "Enter Book Name: ";
        cin.ignore(); // Clear newline from buffer
        getline(cin, b_name);
        cout << "Enter price of Book: ";
        cin >> b_price;
        cout << "Enter no of pages: ";
        cin >> b_pages;
    }

    void display() {
        cout << "\n--- Book details ---" << endl;
        cout << "Name of Book: " << b_name << endl;
        cout << "Price of Book: " << b_price << endl;
        cout << "No of pages: " << b_pages << endl;
    }

    double getPrice() const {
        return b_price;
    }
};

int main() {
    Book b1, b2;
    b1.accept();
    b2.accept();

    if (b1.getPrice() > b2.getPrice()) {
        b1.display();
    } else {
        b2.display();
    }

    return 0;
}
