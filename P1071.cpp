//Created in Sat Nov 12 11:58:36 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include <iostream>

using namespace std;

int n, cnt;
string a[9999];

int main(){
    cin >> n;
    while(n != 0){
        cnt += 1;
        for (int i=1; i <= n; i++){
            cin >> a[i];
        }
        cout << "SET " << cnt << endl;
        for (int i=1; i <= n; i++){
            if (i % 2 == 1){
                cout << a[i] << endl;
            }
        }
        for (int i=n; i >= 1; i--){
            if (i % 2 == 0){
                cout << a[i] << endl;
            }
        }
        cin >> n;
    }
}