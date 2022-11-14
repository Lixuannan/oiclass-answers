// Created in Sat Nov 12 16:27:43 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>

using namespace std;
int h, l, c, r, sum, a[99][99];
int main(){
    cin >> h >> l >> c >> r;
    for (int i=1; i <= h; i++){
        for (int j=1; j <= l; j++){
            cin >> a[i][j];
        }
    }
    c += 1;
    r += 1;
    sum += a[c - 1][r - 1] + a[c - 1][r] + a[c - 1][r + 1];
    sum += a[c][r - 1] + a[c][r + 1];
    sum += a[c + 1][r - 1] + a[c + 1][r]  + a[c + 1][r + 1];
//    cout << a[c - 1][r - 1] << " " << a[c - 1][r] << " " << a[c - 1][r + 1] << endl;
//    cout << a[c][r - 1] << " " << a[c][r] << " " << a[c][r + 1] << endl;
//    cout << a[c + 1][r - 1] << " " << a[c + 1][r]  << " " << a[c + 1][r + 1] << endl;
    cout << sum;
}