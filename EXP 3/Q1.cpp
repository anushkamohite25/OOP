#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string book_title;
    string author_name;
    float price;

public:
    Book() {}

    void acceptData() {
        cout << "Enter book title: ";
        getline(cin, book_title);
        cout << "Enter author name: ";
        getline(cin, author_name);
        cout << "Enter price: ";
        cin >> price;
        cin.ignore();
    }

    void displayData() {
        cout << "Book Title: " << book_title << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book *bookPtr = new Book();

    cout << "Enter book details:" << endl;
    bookPtr->acceptData();

    cout << "\nDisplaying book details:" << endl;
    bookPtr->displayData();

    delete bookPtr;
    return 0;
}
