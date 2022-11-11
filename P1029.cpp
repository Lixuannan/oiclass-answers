//Created in Fri Nov 11 15:24:20 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int n, q, inN, inQ, t, sum = 0;
int a[10001];

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> inN;
        for (int j = sum; j < sum + inN; j++) {
            a[j] = i;
        }
        // for (int i = 1; i <= 1001; i++) cout << a[i] << " ";
        cout << endl;
        sum += inN;
    }

    for (int i = 1; i <= q; i++) {
        cin >> inQ;
        cout << a[inQ] << endl;
    }
}