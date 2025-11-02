#include <iostream>
using namespace std;

class Academic {
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

class Result : public Academic, public Sports {
private:
    int total;

public:
    void calculateTotal() {
        total = marks + sportsScore;
    }

    void displayResult() {
        displayMarks();
        displaySportsScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;
    int m, s;

    cout << "Enter Academic Marks: ";
    cin >> m;
    cout << "Enter Sports Score: ";
    cin >> s;

    r.setMarks(m);
    r.setSportsScore(s);

    r.calculateTotal();

    cout << "\n--- Student Result ---" << endl;
    r.displayResult();

    return 0;
}
