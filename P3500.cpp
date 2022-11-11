//Created in Fri Nov 11 15:12:54 2022
#include "iostream"
#include "algorithm"

using namespace std;
int n, all[9999], a[9999], b[9999], c[9999];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        all[i] = a[i] + b[i] + c[i];
    }
    sort(a, a + n + 1);
    sort(b, b + n + 1);
    sort(c, c + n + 1);
    sort(all, all + n + 1);
    cout << all[n] << " " << a[n] << " " << b[n] << " " << c[n];
}