#include <iostream>
using namespace std;

template <class T>
T square(T num) {
    return num * num;
}


template <>
string square<string>(string str) {
    return str + str;  
}

int main() {
    int i = 5;
    string s = "Hello";

    cout << "Square of integer " << i << " = " << square(i) << endl;
    cout << "Square of string \"" << s << "\" = " << square(s) << endl;

    return 0;
}

