// Created in Sat Nov 12 16:27:26 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
int n, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i < 10) ans += 1;
        else if (i < 100) ans += 2;
        else if (i < 1000) ans += 3;
        else if (i < 10000) ans += 4;
        else if (i < 100000) ans += 5;
        else if (i < 1000000) ans += 6;
        else if (i < 10000000) ans += 7;
        else if (i < 100000000) ans += 8;
        else if (i < 1000000000) ans += 9;
    }
    cout << ans << endl;
}