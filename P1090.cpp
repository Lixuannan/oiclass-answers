//Created in Sat Nov 12 09:25:25 2022
 //System: Darwin 22.1.0
#include <iostream>

using namespace std;
int s, t, ans;

int to2(int x){
    int cnt = 0;
    while(x > 0){
        if (cnt < 4){
            cnt += x % 2;
            x /= 2;
        }else{
            return -1;
        }
    }
    return cnt;
}

int main(){
    cin >> s >> t;
    if (s > t){
        swap(s, t);
    }
    for (int i=s; i <= t; i++){
        if (to2(i) != -1){
            ans += 1;
        }
    }
    cout << ans;
}