//Created in Sat Nov 12 09:25:43 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "iomanip"

using namespace std;
double n, m, ans;

int main() {
    cin >> n >> m;
    if (n > 0) {
        if (n <= 2) {
            ans = 6;
        } else if (n >= 10) {
            ans = 6 + 8 * 1.8 + (n - 10) * 1.8 * 1.5;
        } else {
            ans = 6 + (n - 2) * 1.8;
        }
        if (m >= 3) {
            ans += int(m) / 3;
        }
        cout << setprecision(1) << fixed << ans << endl;
    } else cout << setprecision(1) << fixed << double (0) << endl;

}