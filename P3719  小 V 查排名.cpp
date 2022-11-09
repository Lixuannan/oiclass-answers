//Created in Wed Nov  9 16:22:15 2022
#include "iostream"

using namespace std;
int n,k,in,cnt;
int main(){
    cin >> n >> k;
    for (int i=1; i <= n; i++){
        cin >> in;
        if(in > k){
            cnt += 1;
        }
    }
    cout << cnt;
}