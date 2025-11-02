#include <iostream>
using namespace std;

class SumCalculator {
private:
    int n, sum;
public:
    SumCalculator(int num) : n(num), sum(0) {
        for (int i = 1; i <= n; ++i)
            sum += i;
    }
    void display() { cout << "Sum from 1 to " << n << " is: " << sum << endl; }
};

int main() {
    SumCalculator calc(10);
    calc.display();
    return 0;
}
