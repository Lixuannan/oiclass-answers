//Created in Fri Nov 11 16:16:11 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
int n, ans = 1;
int main(){
    cin >> n;
    for (int i=2; i <= n; i++){
        ans *= i;
    }
    cout << ans << endl;
}