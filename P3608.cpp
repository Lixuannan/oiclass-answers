//Created in Fri Nov 11 15:02:49 2022
#include "iostream"

using namespace std;
int a, b, c;

int main() {
    cin >> a >> b >> c;
    if (c > 0) {
        if (b - a == c) {
            cout << 0;
            return 0;
        } else if (b - a > 0) {
            cout << c / (b - a);
            return 0;
        } else if (b - a < 0) {
            cout << -1;
            return 0;
        } else if (b - a == 0) {
            cout << -1;
            return 0;
        }
    } else {
        cout << 0;
        return 0;
    }
}