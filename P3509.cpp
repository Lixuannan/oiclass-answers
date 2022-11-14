// Created in Sat Nov 12 16:27:44 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
using namespace  std;
int n, m, t, ans;
int main(){
    cin >> n >> m >> t;
    ans = m + t - 1;
    if (ans > n && ans % n != 0){
        cout << ans % n << endl;
    }else if (ans % n == 0){
        cout << n << endl;
    }else cout << ans << endl;
}