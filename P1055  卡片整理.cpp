//Created in Fri Nov 11 11:49:16 2022
#include "iostream"
using namespace std;
int a[9999999];
int n, in;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> in;
        a[in] += 1;
    }
    for (int i=0; i <= 9999998; i++){
        if (a[i] > 0){
            cout << i << " " << a[i] << endl;
        }
    }
}