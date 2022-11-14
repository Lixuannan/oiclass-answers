// Created in Sat Nov 12 16:27:42 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>

using namespace std;
int n, m;

int main() {
    cin >> n >> m;
    cout << m << endl;
    for (int i = 1; i < n; i++) cout << " ";
    cout << "X\n";
    n += 1;
    for (int i = m; i > 0; i--) {
        for (int j = 1; j < n - (n - i); j++) cout << " ";
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}