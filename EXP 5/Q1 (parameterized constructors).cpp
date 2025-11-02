#include <iostream>
using namespace std;

class Sum {
private:
    int n;

public:

    Sum(int x) {
        n = x;
        cout << "Parameterized Constructor: n is set to " << n << endl;
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
    int n;


    cout << "Enter a value for n: ";
    cin >> n;


    Sum sum2(n);  
    cout << "Sum of numbers from 1 to " << n << " is: " << sum2.calculateSum() << endl;

    return 0;
}
