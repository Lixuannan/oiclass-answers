#include "iostream"

using namespace std;
int n, sum, sum1, sum2;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
        if (i % 2 == 0) {
            sum2 += i;
        } else {
            sum1 += i;
        }
    }
    cout << sum1 << " " << sum2;
}