//Created in Fri Nov 11 14:19:11 2022
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