//Created in Fri Nov 11 15:02:43 2022
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