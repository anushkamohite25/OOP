#include <iostream>
using namespace std;

class sum {
public:
    float add(float a, float b, float c, float d, float e) {
        return a + b + c + d + e;
    }

    int add(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) {
        return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10;
    }
};

int main() {
    sum s;
    cout << "Sum of 5 floats: " << s.add(1.1f, 2.2f, 3.3f, 4.4f, 5.5f) << endl;
    cout << "Sum of 10 integers: " << s.add(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
    return 0;
}
