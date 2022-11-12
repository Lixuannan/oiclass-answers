//Created in Sat Nov 12 11:59:00 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n, m, in, maxn, minn = 99999;
int main(){
    cin >> m >> n;
    for (int i=1; i <= m; i++){
        for (int j=1; j <= n; j++){
            cin >> in;
            if (in > maxn){
                maxn = in;
            }
            if (in < minn){
                minn = in;
            }
        }
    }
    cout << maxn - minn;
}