//Created in Fri Nov 11 16:04:42 2022
 //System: Darwin 22.1.0
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