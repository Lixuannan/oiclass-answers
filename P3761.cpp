//Created in Sat Nov 12 11:59:13 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 >= a2 && b1 >= b2 || a1 >= b2 && b1 >= a2) cout << 1;
    else cout << 2;
}