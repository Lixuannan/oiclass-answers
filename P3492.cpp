// Created in Sat Nov 12 16:27:43 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
long long v;

int main() {
    cin >> v;
    if (v >= 2000000) {
        cout << v << " " << 12345 << endl;
        return 0;
    } else if (v >= 115000) {
        cout << v << " " << 1234 << endl;
        return 0;
    } else if (v >= 16700) {
        cout << v << " " << 123 << endl;
        return 0;
    } else if (v >= 11200) {
        cout << v << " " << 12 << endl;
        return 0;
    } else if (v >= 7960) {
        cout << v << " " << 1 << endl;
        return 0;
    } else{
        cout << v << " " << 0 << endl;
        return 0;
    }
}