//Created in Sat Nov 12 08:45:46 2022
 //System: Darwin 22.1.0
#include "iostream"
#include "cstring"

using namespace std;
int n, m, in1, in2;
int main(){
    cin >> n >> m;
    int a[n + 1];
    for (int i=1; i <= n; i++){
        a[i] = m;
        cin >> in1 >> in2;
        a[i] += in1;
        a[i] -= in2;
    }
    for (int i=1; i <= n; i++){
        cout << a[i] << endl;
    }
}