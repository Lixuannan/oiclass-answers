//Created in Fri Nov 11 14:19:00 2022
#include "iostream"
using namespace std;
bool p,t;
int n,a[99999],b[99999],cnt,suma,sumb;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        suma = a[i];
        sumb = b[i];
    }
    for (int i=1; i < n; i++){
        if (a[i] < b[i]){
            p = false;
        }else{
            p=true;
        }
        if (a[i+1] < b[i+1]){
            t = false;
        }else{
            t=true;
        }
        if (p != t) cnt += 1;
    }
    if (suma > sumb) {
        cout << "peiqi" << endl;
    } else if (sumb > suma) {
        cout << "aimili" << endl;
    }
    cout << cnt << endl;
}