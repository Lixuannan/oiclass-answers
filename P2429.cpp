// Created in Sat Nov 12 16:27:31 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
using namespace std;
int n, ans = 1;
int main(){
    cin >> n;
    for (int i=2; i <= n; i++){
        ans *= i;
    }
    cout << ans << endl;
}