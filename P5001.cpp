//Created in Sat Nov 12 11:59:17 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cstring"

using namespace std;
string a, b;

int main() {
    cin >> a >> b;
    cout << max(a, b) << min(a, b);
}