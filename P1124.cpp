//Created in Fri Nov 11 15:24:28 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "cstring"

using namespace std;

bool isTre(int a, int b, int c){
    if (a + b > c && a + c > b && b + c > a){
        return true;
    } else{
        return false;
    }
}

int n, maxlen;
int main(){
    cin >> n;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i=0; i < n; i++){
        cin >> a[i];
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            for (int t=0; t < n; t++){
                if (isTre(a[i], a[j], a[t])
                && a[i] + a[j] + a[t] > maxlen
                && i != j && j != t && i != t){
                    maxlen = a[i] + a[j] + a[t];
                }
            }
        }
    }
    cout << maxlen;
}