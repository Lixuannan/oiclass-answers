// Created in Sat Nov 12 16:27:33 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "iomanip"

using namespace std;

int main() {
    double r1, r2, r;
    cin >> r1 >> r2;
    r = 1 / (1 / r1 + 1 / r2);
    cout << setprecision(3) << fixed << r << endl;
}