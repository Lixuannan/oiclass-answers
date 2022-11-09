//Created in Wed Nov  9 16:22:13 2022
#include "iostream"

using namespace std;
int n,m, ai, cnt;
int main(){
    cin >> n >> m;
    for(int i=1; i <= n ; i++){
        cin >> ai;
        if (ai < m){
            cnt += 1;
        }
    }
    cout << cnt;
}