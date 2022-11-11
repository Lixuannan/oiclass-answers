//Created in Fri Nov 11 16:40:15 2022
 //System: Darwin 22.1.0
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