// Created in Sat Nov 12 16:27:29 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
int n, a[4], t;
int main(){
    cin >> n;
    a[0] = 1;
    for (int i=1; i < n; i++){
        a[3] += a[2];
        a[2] = a[1];
        a[1] = a[0];
        a[0] = a[3];
    }
    cout << a[3] + a[2] + a[1] + a[0];
}