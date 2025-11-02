#include <iostream>
using namespace std;

class area {
public:
    int calculate(int l, int b) {
        return l * b;
    }

    int calculate(int side) {
        return side * side;
    }
};

int main() {
    area a;
    cout << "Area of laboratory (Rectangle 10 x 5): " << a.calculate(10, 5) << endl;
    cout << "Area of classroom (Square 6 x 6): " << a.calculate(6) << endl;
    return 0;
}
