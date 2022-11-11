//Created in Fri Nov 11 14:18:56 2022
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