//Created in Fri Nov 11 16:16:16 2022
 //System: Darwin 22.1.0
#include "iostream"
using namespace std;
bool p;
int n, max_, ans;
int a[10000000];
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a[i];
        if (a[i] > max_) max_ = a[i];
    }
    for (int i=1; i <= max_; i++){
        p = true;
        for (int j=1; j <= n; j++){
            if (a[j] % i != 0){
                p = false;
            }
        }
        if (p){
            ans = i;
        }
    }
    cout << ans << endl;
}