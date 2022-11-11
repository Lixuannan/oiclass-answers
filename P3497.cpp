//Created in Fri Nov 11 16:40:15 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
int n, a = 1, b = 1, c = 1;

int main() {
    cin >> n;
    for (int i = 1; i < n - 1; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
}