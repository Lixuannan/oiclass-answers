// Created in Sat Nov 12 16:27:21 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>

using namespace std;
char ch;
bool p[99999];
int n, a[999][999], cnt;
void dfs(int x){
    if (x > n){
        cnt += 1;
        return;
    }
    for (int i=1; i <= n; i++){
        if (a[x][i] && !p[i]){
            p[i] = true;
            dfs(x + 1);
            p[i] = false;
        }
    }
}
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        for (int j=1; j <= n; j++){
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }
    dfs(1);
    cout << cnt;
}