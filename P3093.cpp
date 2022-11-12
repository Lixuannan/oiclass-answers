//Created in Sat Nov 12 09:25:44 2022
 //System: Darwin 22.1.0
#include<iostream>

using namespace std;
int n, m;

int main() {
    cin >> n >> m;
    cout << m << endl;
    for (int i = 1; i < n; i++) cout << " ";
    cout << "X\n";
    n += 1;
    for (int i = m; i > 0; i--) {
        for (int j = 1; j < n - (n - i); j++) cout << " ";
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}