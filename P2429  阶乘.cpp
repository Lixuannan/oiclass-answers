//Created in Fri Nov 11 10:52:19 2022
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