//Created in Wed Nov  9 16:22:13 2022
#include "iostream"

using namespace std;
unsigned long long a, b, ans;

int main() {
    cin >> a >> b;
    ans = ((a % 10) * ((a * a + b) % 10)) % 10;
    cout << ans << endl;
}