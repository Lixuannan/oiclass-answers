//Created in Fri Nov 11 14:18:46 2022
#include "iostream"
#include "cstring"

using namespace std;
int n, m;
int main(){
    cin >> n >> m;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            for (int t=0; t < n; t++){
                for (int k=0; k < n; k++){
                    if (a[i] + a[j] + a[t] + a[k] == m){
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO";
}