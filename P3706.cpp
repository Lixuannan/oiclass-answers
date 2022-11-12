//Created in Sat Nov 12 11:59:11 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n,x,cnt,t;
int main(){
    cin >> n >> x;
    for (int i=1; i <= n; i++){
        t = i;
        while(t > 0){
            if (t % 10 == x) cnt += 1;
            t /= 10;
        }
    }
    cout << cnt;
}