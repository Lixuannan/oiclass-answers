// Created in Sat Nov 12 16:27:12 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>

using namespace std;
int n, t1, t2, p1 = 1, p2 = 1, cnt;
bool a[100001];

int main() {
    cin >> n >> t1 >> t2;
    a[1] = true;
    for (int i = 2; i <= n; i++) {
        p1 += t1 + 1;
        p2 += t2 + 1;
        a[p1] = true;
        a[p2] = true;
    }
    for (int i = 1; i <= 100000; i++) {
        if (a[i]) cnt++;
    }
    cout << cnt;
}