//Created in Sat Nov 12 08:44:21 2022
 //System: Darwin 22.1.0
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