//Created in Sat Nov 12 11:58:50 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int a, b, c;

int main() {
    cin >> a >> b;
    if (b < 10) {
        c = a * 10 + b;
    } else if (b < 100) {
        c = a * 100 + b;
    } else if (b < 1000) {
        c = a * 1000 + b;
    }
    cout << c << endl;
}