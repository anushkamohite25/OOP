#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    cout << "Initial Vector: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " " << endl;
    }

    cout << "Multiply by 10" << endl;
    for (int i = 0; i < 10; i++) {
        v[i] = v[i]*10;
    }

    cout << "New Vector: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " " << endl;
    }
    
    return 0;
}
