//Created in Fri Nov 11 14:56:39 2022
#include "iostream"

using namespace std;
double a, b, c;

int main() {
    cin >> a >> b >> c;
    if ((a + b + c) / 3 <= 8.3) {
        cout << "YES" << endl;
        return 0;
    } else cout << "NO" << endl;
}