//Created in Sat Nov 12 11:58:32 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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