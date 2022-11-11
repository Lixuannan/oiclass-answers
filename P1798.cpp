//Created in Fri Nov 11 16:40:03 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<algorithm>

using namespace std;
int n, ans, maxn;
int a[99999999];

bool f(int lim) {
    int cur = 1;
    while (cur <= n) {
        int pos = lower_bound(a + cur, a + n + 1, a[cur - 1] + lim) - a;
        if (a[pos] != a[cur - 1] + lim) return false;
        cur = pos + 1;
    }
    return true;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        maxn = max(maxn, a[i]);
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; ++i) {
        if (a[n] % a[i] != 0 || a[i] < maxn){
            continue;
        }
        if (f(a[i])) {
            ans = a[i];
            break;
        }
    }
    cout << ans;
}