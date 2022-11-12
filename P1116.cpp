//Created in Sat Nov 12 08:44:29 2022
 //System: Darwin 22.1.0
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