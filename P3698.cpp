//Created in Fri Nov 11 15:13:00 2022
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