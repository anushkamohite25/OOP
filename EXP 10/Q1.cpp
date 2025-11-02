#include<iostream>
using namespace std;

template<class T>
T myfunction(T a[], int n){
    T sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    return sum;
}

int main(){
    int a1[3] = {2, 0, 2};
    float a2[3] = {1.2, 1.3, 2.4};
    double a3[3] = {10.5, 20.5, 30.5};

    cout << "Sum of integer array is: " << myfunction(a1, 3) << endl;
    cout << "Sum of float array is: " << myfunction(a2, 3) << endl;
    cout << "Sum of double array is: " << myfunction(a3, 3) << endl;

    return 0;
}
