//Created in Sat Nov 12 09:25:52 2022
 //System: Darwin 22.1.0
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