//Created in Sat Nov 12 11:59:13 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
int n, in, ans;

long long changeOp(long long x){
    int cnt = 0;
    long long y = 0, k = x;
    while(k > 0.0000000001){
        k /= 10;
        cnt += 1;
    }
    while(x > 0.0000000001){
        cnt -= 1;
        y += (x % 10) * pow(10, cnt);
        x /= 10;
    }
    return y;
}

int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        ans += changeOp(in);
    }
    cout << ans;
}