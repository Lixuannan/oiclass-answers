// Created in Sat Nov 12 16:27:29 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cstring>

using namespace std;
int m, n, cnt;

int main() {
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cnt = 0;
        cin >> n;
        if (n == 1) {
            cout<<1<<endl;
            continue;
        }
        bool a[n + 1];
        memset(a, true, sizeof(a));
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (k % j == 0) a[k] = !a[k];
            }
        }
        for (int j = 0; j <= n; j++) {
            // cout<<a[j];
            if (!a[j]) cnt++;
        }
        cout << cnt << endl;
    }
}