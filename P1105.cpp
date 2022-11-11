//Created in Fri Nov 11 14:56:08 2022
#include "iostream"
#include "cstring"

using namespace std;
int n, in, cnt;
bool a[1001];
int main(){
    cin >> n;
    int b[n];
    memset(b, 0, sizeof b);
    for (int i=1; i <= n; i++){
        cin >> in;
        a[in] = true;
    }
    for (int i=1; i <= 1000; i++){
        if (a[i]){
            cnt += 1;
        }
    }
    cout << cnt << endl;
    for (int i=1; i <= 1000; i++){
        if (a[i]){
            cout << i << " ";
        }
    }
}