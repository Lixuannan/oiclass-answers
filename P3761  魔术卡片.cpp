//Created in Fri Nov 11 10:52:33 2022
#include "iostream"

using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 >= a2 && b1 >= b2 || a1 >= b2 && b1 >= a2) cout << 1;
    else cout << 2;
}