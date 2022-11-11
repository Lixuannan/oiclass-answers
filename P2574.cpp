//Created in Fri Nov 11 16:04:33 2022
 //System: Darwin 22.1.0
#include <iostream>
#include <cmath>

using namespace std;
long long m, n;

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
    cin >> m;
    for (int i=0; i <= 30; i++){
        if (m == changeOp(m)){
            cout << i;
            return 0;
        }else{
            n = changeOp(m);
            m += n;
        }
    }
    cout << -1;
}