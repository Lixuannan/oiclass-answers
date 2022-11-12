//Created in Sat Nov 12 11:59:08 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "algorithm"

using namespace std;
bool p;
int n, a[999999], m;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m;
    sort(a, a + n + 1);
    for (int i=0; i <= n; i++){
        if (a[i] == m && !p){
            cout << i << " ";
            p = true;
        } else if(a[i] > m && p){
            cout << i - 1;
            return 0;
        }
    }
}