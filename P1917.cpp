//Created in Sat Nov 12 11:58:50 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
using namespace std;
int m, sum, cnt;
int main(){
    cin >> m;
    for (int i=1; i <= m; i++){
        if (sum + (1 + i) * i / 2 < m){
            sum += (1 + i) * i / 2;
            cnt += 1;
        }else{
            cout << cnt << " " << sum << endl;
            return 0;
        }
    }
}