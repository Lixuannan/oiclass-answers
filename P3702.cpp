//Created in Fri Nov 11 15:13:00 2022
#include "iostream"

using namespace std;
unsigned long long a, b, ans;

int main() {
    cin >> a >> b;
    ans = ((a % 10) * ((a * a + b) % 10)) % 10;
    cout << ans << endl;
}