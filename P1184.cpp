// Created in Sat Nov 12 16:27:20 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include <iostream>
#include <iomanip>

using namespace std;
int n, a[99];
bool p[9999];
void dfs(int x){
    if (x > n){
        for (int i=1; i <= n; i++){
            cout << setw(5) << a[i];
        }
        cout << endl;
        return;
    }
    for (int i=1; i <= n; i++){
        if (!p[i]){
            a[x] = i;
            p[i] = true;
            dfs(x + 1);
            p[i] = false;
        }
    }
}
int main(){
    cin >> n;
    dfs(1);
}