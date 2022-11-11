//Created in Fri Nov 11 14:18:56 2022
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