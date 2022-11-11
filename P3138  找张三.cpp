//Created in Fri Nov 11 14:31:12 2022
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