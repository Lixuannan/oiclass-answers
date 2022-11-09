//Created in Wed Nov  9 16:22:12 2022
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