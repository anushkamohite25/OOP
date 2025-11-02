#include <iostream>
using namespace std;

class Sum {
private:
    int n;

public:

    Sum() {
        n = 10;  
        cout << "Default Constructor: n is set to " << n << endl;
    }


    int calculateSum() {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
};

int main() {
  
    Sum sum1;  
    cout << "Sum of numbers from 1 to " << 10 << " is: " << sum1.calculateSum() << endl;

    return 0;
}
