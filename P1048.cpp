//Created in Sat Nov 12 08:44:18 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "cstring"
#include "cmath"

using namespace std;

int n, in1, in2, j=1, cnt;
bool a[1000000];

int main() {
    while (cin >> n) {
        j++;
        cnt = 0;
        memset(a, false, sizeof(a));
        a[1] = true;
        cin >> in1 >> in2;
        if (abs(in1 - in2) < n) a[abs(in1 - in2)] = true;
        for (int i = 3; i <= n; i++) {
            // cout << abs(in1 - in2) << endl;
            in1 = in2;
            cin >> in2;
            if (abs(in1 - in2) < n) a[abs(in1 - in2)] = true;
        }
        for (int i = 1; i < n; i++) {
            // cout << a[i] << endl;
            if (a[i]) {
                cnt++;
            }
        }
        if (cnt == n-1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}