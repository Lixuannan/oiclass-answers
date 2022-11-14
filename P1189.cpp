// Created in Sat Nov 12 16:27:20 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
string str;
int m, n, a[100][100], cnt;
void dfs(int x, int y){
    if (a[x][y] == 0){
        return ;
    }
    a[x][y] = 0;
    dfs(x - 1, y);
    dfs(x  + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}
int main(){
    cin >> m >> n;
    for (int i=1; i <= m; i++){
        cin >> str;
        str = " " + str;
        for (int j=1; j <= str.length() - 1; j++){
            a[i][j] = str[j] - '0';
        }
    }
    for (int i=1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j] != 0){
                dfs(i, j);
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
}