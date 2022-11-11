//Created in Fri Nov 11 10:52:06 2022
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