//Created in Fri Nov 11 15:02:33 2022
#include "iostream"

using namespace std;
int n, a[4], t;
int main(){
    cin >> n;
    a[0] = 1;
    for (int i=1; i < n; i++){
        a[3] += a[2];
        a[2] = a[1];
        a[1] = a[0];
        a[0] = a[3];
    }
    cout << a[3] + a[2] + a[1] + a[0];
}