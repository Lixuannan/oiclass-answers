//Created in Fri Nov 11 16:04:42 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
unsigned long long a, b, ans;

int main() {
    cin >> a >> b;
    ans = ((a % 10) * ((a * a + b) % 10)) % 10;
    cout << ans << endl;
}