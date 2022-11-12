//Created in Sat Nov 12 11:58:44 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"
using namespace std;
int n;
int main(){
    cin >> n;
    for (int i=2; i <= ceilf(sqrt(n)); i++){
        if (n % i == 0 && n / i > i){
            cout << n / i << endl;
            return 0;
        }else if (n % i == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}