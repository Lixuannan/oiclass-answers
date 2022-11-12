//Created in Sat Nov 12 08:45:11 2022
 //System: Darwin 22.1.0
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