//Created in Fri Nov 11 15:25:01 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace  std;
int n, ans, i1 = 1, i2 = 2, i3;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        i3 = (i2 % 3) + i1 + 1;
        i1 = i2;
        i2 = i3;
        if (i3 % 7 == 0){
            ans += 1;
        }
    }
    cout << ans << endl;
}