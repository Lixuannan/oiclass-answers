//Created in Fri Nov 11 16:16:30 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int t, k, a[10000], p;

bool inSeven(long long n) {
    while (n > 0.0001) {
        if (n % 10 == 7) return true;
        n /= 10;
    }
    return false;
}

int main() {
    cin >> t;
    p++;
    for (int i = 7; i <= 2021 * 4; i++) {
        // cout<<p<<endl;
        // cout<<i % 7<<"\t"<<inSeven(i)<<endl;
        if (i % 7 == 0 || inSeven(i)) {
            a[p] = i;
            p++;
        }
    }
    for (int i = 1; i <= t; i++) {
        cin >> k;
        cout << a[k]<<endl;
    }
// cout<<inSeven(979999999999);
}