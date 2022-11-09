//Created in Wed Nov  9 16:21:59 2022
#include "iostream"

using namespace std;
int n, m;

int main() {
    cin >> m >> n;
    if (m % n == 0) {
        cout << m / n << endl;
    } else {
        cout << m / n + 1 << endl;
    }
}