// Created in Sat Nov 12 16:27:44 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
double a, b, c;

int main() {
    cin >> a >> b >> c;
    if ((a + b + c) / 3 <= 8.3) {
        cout << "YES" << endl;
        return 0;
    } else cout << "NO" << endl;
}