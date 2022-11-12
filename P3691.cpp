//Created in Sat Nov 12 11:59:09 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cstring"

using namespace std;
int n, m, in1, in2;
int main(){
    cin >> n >> m;
    int a[n + 1];
    for (int i=1; i <= n; i++){
        a[i] = m;
        cin >> in1 >> in2;
        a[i] += in1;
        a[i] -= in2;
    }
    for (int i=1; i <= n; i++){
        cout << a[i] << endl;
    }
}