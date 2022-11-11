//Created in Fri Nov 11 13:59:57 2022
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