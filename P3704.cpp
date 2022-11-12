//Created in Sat Nov 12 11:59:11 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int score;

int main() {
    cin >> score;
    if (score >= 90) cout << "PERFECT" << endl;
    else if (score >= 80) cout << "EXCELLENT" << endl;
    else if (score >= 70) cout << "GOOD" << endl;
    else if (score >= 60) cout << "PASS" << endl;
    else cout << "FAIL" << endl;
}