//Created in Fri Nov 11 16:04:37 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int x, y, p;

int main() {
    cin >> x >> y;
    if (x % 2 == 1) {
        p += 1;
        x += 1;
    }
    if (y % 2 == 0) {
        p += 1;
        y -= 1;
    }
    p += (y - x + 1) / 2;
    cout << p << endl;
}