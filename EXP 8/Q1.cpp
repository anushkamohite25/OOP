
#include <iostream>
using namespace std;
class addstring {
public:
    string str;
    addstring (string s) {
        str = s;
    }
    addstring operator + (addstring obj) {
        return addstring (str + obj.str);
    }
    void display() {
        cout << str << endl;
    }
};
int main() {
    addstring S1 ("XYZ");
    addstring S2 ("PQR");
    addstring S3 = S1 + S2;
    cout << "concatenated string: " << S3.str << endl;
    return 0;
}
