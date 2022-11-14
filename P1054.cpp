// Created in Sat Nov 12 16:27:12 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "cstring"
#include "algorithm"

using namespace std;
int n;
int main(){
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i=0; i < n; i++){
        if (i % 2 == 0){
            cout << a[i] << " ";
        }
    }for (int i=n - 1; i >= 1; i--){
        if (i % 2 == 1){
            cout << a[i] << " ";
        }
    }
}