#include <iostream>
using namespace std;

class CollegeStudent {
protected:
    int student_id;
    int college_code;
public:
    void getStudentData() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter College Code: ";
        cin >> college_code;
    }
    void showStudentData() {
        cout << "Student ID: " << student_id << endl;
        cout << "College Code: " << college_code << endl;
    }
};

class Test : virtual public CollegeStudent {
protected:
    float percentage;
public:
    void getTestData() {
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void showTestData() {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Sports : virtual public CollegeStudent {
protected:
    char grade;
public:
    void getSportsData() {
        cout << "Enter Sports Grade (A/B/C): ";
        cin >> grade;   
    }
    void showSportsData() {
        cout << "Sports Grade: " << grade << endl;
    }
};

class Result : public Test, public Sports {
public:
    void getResultData() {
        getStudentData();
        getTestData();
        getSportsData();
    }
    void showResultData() {
        cout << "\n--- Student Result ---\n";
        showStudentData();
        showTestData();
        showSportsData();
    }
};

int main() {
    Result r;
    r.getResultData();
    r.showResultData();
    return 0;
}
