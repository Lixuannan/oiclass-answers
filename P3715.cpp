//Created in Fri Nov 11 16:40:22 2022
 //System: Darwin 22.1.0
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