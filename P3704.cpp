//Created in Fri Nov 11 16:04:42 2022
 //System: Darwin 22.1.0
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