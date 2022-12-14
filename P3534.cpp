// Created in Sat Nov 12 16:27:46 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
long long prime[99999];
long long x, y, z, p;

long long gcd(long long n, long long m) {
    for (long long i = min(n, m); i > 1; i--) {
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
    return 1;
}

long long lcm(long long n, long long m) {
    return n * m / gcd(n, m);
}

bool isprime(long long n) {
    if (n <= 1) return false;
    for (long long i = 2; i <= ceilf(sqrt(n)); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> x >> y >> z;
    if (z == 1) {
        for (long long i = 1; i <= x; i++) {
            if (isprime(i)) {
                prime[p] = i;
                p += 1;
            }
        }
        if (y >= p + 1) cout << prime[p - 1];
        else cout << prime[y - 2];
    } else if (z == 2) {
        cout << gcd(x, y);
    } else if (z == 3) {
        cout << lcm(x, y);
    }
}