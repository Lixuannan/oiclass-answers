//Created in Sat Nov 12 11:58:56 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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