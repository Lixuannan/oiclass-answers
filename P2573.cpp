//Created in Sat Nov 12 11:58:57 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>

using namespace std;
bool boolp = true;
int n, m, a[999999], p;

int main() {
    cin >> n >> m;
    while (n > 0){
        a[p] = n % m;
        n /= m;
        p += 1;
    }
    for (int i=999998; i >= 0; i--){
        if (a[i] == 0 && boolp){
            continue;
        } else if(a[i] != 0 || !boolp){
            cout << a[i];
            boolp = false;
        }
    }
}