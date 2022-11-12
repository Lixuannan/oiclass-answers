//Created in Sat Nov 12 11:59:12 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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