//Created in Fri Nov 11 16:16:20 2022
 //System: Darwin 22.1.0
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