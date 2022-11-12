//Created in Sat Nov 12 11:58:37 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cstring"

using namespace std;
int n, in, cnt;
bool a[1001];
int main(){
    cin >> n;
    int b[n];
    memset(b, 0, sizeof b);
    for (int i=1; i <= n; i++){
        cin >> in;
        a[in] = true;
    }
    for (int i=1; i <= 1000; i++){
        if (a[i]){
            cnt += 1;
        }
    }
    cout << cnt << endl;
    for (int i=1; i <= 1000; i++){
        if (a[i]){
            cout << i << " ";
        }
    }
}