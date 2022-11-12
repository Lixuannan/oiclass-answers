//Created in Sat Nov 12 11:59:09 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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