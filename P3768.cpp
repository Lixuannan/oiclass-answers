//Created in Fri Nov 11 14:56:49 2022
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