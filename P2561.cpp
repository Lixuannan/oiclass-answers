// Created in Sat Nov 12 16:27:38 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
using namespace std;
int n,cnt,h,in;
int main() {
    cin >> n >> h;
    for (int i=1; i <= n; i++){
        cin >> in;
        if (in < h){
            cnt += 1;
        }
    }
    cout << cnt << endl;
}