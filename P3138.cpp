// Created in Sat Nov 12 16:27:42 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
using namespace  std;
int n, ans, i1 = 1, i2 = 2, i3;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        i3 = (i2 % 3) + i1 + 1;
        i1 = i2;
        i2 = i3;
        if (i3 % 7 == 0){
            ans += 1;
        }
    }
    cout << ans << endl;
}