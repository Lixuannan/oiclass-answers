//Created in Fri Nov 11 14:31:13 2022
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