//Created in Fri Nov 11 15:24:30 2022
 //System: Darwin 22.1.0
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