// Created in Sat Nov 12 16:27:18 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "cstring"

using namespace std;
int n, m;
int main(){
    cin >> n >> m;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            for (int t=0; t < n; t++){
                for (int k=0; k < n; k++){
                    if (a[i] + a[j] + a[t] + a[k] == m){
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
}