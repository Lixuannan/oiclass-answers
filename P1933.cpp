//Created in Sat Nov 12 08:45:11 2022
 //System: Darwin 22.1.0
#include "iostream"

using namespace std;
long long n, ans;
int main(){
    cin >> n;
    for (int i=1; i <= n; i ++){
        ans += (n - i + 1) * (n - i + 1);
    }
    cout << ans;
}