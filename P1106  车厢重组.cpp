//Created in Fri Nov 11 10:52:04 2022
#include "iostream"
#include "cstring"

using namespace std;
int a[10001];
int n, cnt, t;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a[i];
    }
    for (int i=1; i <= n; i++){
        for (int j=1; j <= n; j++){
            if (a[j] > a[j+1] && a[j] != 0 && a[j + 1] != 0){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                cnt += 1;
            } else{
                continue;
            }
        }
    }
//    for (int i=1; i <= n; i++){
//        cout << a[i] << " ";
//    }
    cout << cnt;
}