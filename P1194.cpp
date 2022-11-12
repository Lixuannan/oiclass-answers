//Created in Sat Nov 12 11:58:42 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include "iostream"

using namespace std;

int x, y, ans;

int ack(int m, int n){
    if (m == 0){
        return n += 1;
    }
    if (m > 0 && n == 0){
        return ack(m - 1, 1);
    }
    if (m > 0 && n > 0){
        return ack((m - 1), ack(m, n - 1));
    }
}

int main(){
    cin >> x >> y;
    ans = ack(x, y);
    cout << ans;
}