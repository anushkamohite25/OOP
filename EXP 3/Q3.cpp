#include <iostream>
using namespace std;

class Student {
public:
    class Marks {
    public:
        int m1, m2, m3;

        void getInput() {
            cout << "Enter marks for 3 subjects: ";
            cin >> m1 >> m2 >> m3;
        }

        float getPercentage() {
            int total = m1 + m2 + m3;
            return total / 3.0;
        }
    };
};

int main() {
    Student::Marks marks;
    marks.getInput();
    float percentage = marks.getPercentage();
    cout << "Percentage = " << percentage << endl;
    return 0;
}
