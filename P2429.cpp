//Created in Fri Nov 11 15:12:48 2022
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