// Created in Sat Nov 12 16:27:17 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<algorithm>

using namespace std;

struct Rabbit {
    int t, d;
};

bool cmp(Rabbit a, Rabbit b) {
    return a.t * b.d < b.t * a.d;
}

int n, sum, dsum;
Rabbit a[200];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].t >> a[i].d;
        dsum += a[i].d;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        dsum -= a[i].d;
        sum += dsum * a[i].t * 2;
    }
    cout << sum;
}