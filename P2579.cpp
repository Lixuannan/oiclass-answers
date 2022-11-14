// Created in Sat Nov 12 16:27:41 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "iomanip"

using namespace std;
double n, m, ans;

int main() {
    cin >> n >> m;
    if (n > 0) {
        if (n <= 2) {
            ans = 6;
        } else if (n >= 10) {
            ans = 6 + 8 * 1.8 + (n - 10) * 1.8 * 1.5;
        } else {
            ans = 6 + (n - 2) * 1.8;
        }
        if (m >= 3) {
            ans += int(m) / 3;
        }
        cout << setprecision(1) << fixed << ans << endl;
    } else cout << setprecision(1) << fixed << double (0) << endl;

}