//Created in Sat Nov 12 11:59:10 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cstring"
#include "algorithm"

using namespace std;
int n;
int main(){
    cin >> n;
    int a[n + 1], b[n + 1];
    memset(a, 0, sizeof (a));
    memset(b, 0, sizeof (b));
    for (int i=1 ;i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n + 1);
    cout << a[n] << endl;
    for (int i=1; i <= n; i++){
        if (b[i] == a[n]){
            cout << i << " ";
        }
    }
}