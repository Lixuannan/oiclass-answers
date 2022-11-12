//Created in Sat Nov 12 11:59:12 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
double n, money;

int main() {
    cin >> n;
    n = ceilf(n);
    if (n >= 3) {
        money += 10;
        if (n - 3 > 4) {
            money += 4 * 1.5;
            if (n >= 7) {
                money += (n - 7) * 2.4;
            }
        } else {
            money += (n - 3) * 1.5;
        }
    } else {
        cout << 10;
        return 0;
    }
    cout << money << endl;
}