//Created in Fri Nov 11 11:49:31 2022
#include "iostream"
#include "algorithm"

using namespace std;
int n, a[30001];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    if (n % 2 == 0) {
        cout << (a[n / 2] + a[n / 2 + 1]) / 2;
    } else {
        cout << a[n / 2 + 1];
    }
}