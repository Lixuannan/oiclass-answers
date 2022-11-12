//Created in Sat Nov 12 09:25:22 2022
 //System: Darwin 22.1.0
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