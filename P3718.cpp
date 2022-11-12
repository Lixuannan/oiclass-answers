//Created in Sat Nov 12 11:59:12 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n, a = 15, b = 25, c = 30, d;
int main(){
    cin >> n;
    if (n == 1){
        d = a;
    }else if (n == 2){
        d = b;
    }else if (n == 3){
        d = c;
    }else{
        for (int i=1; i <= n - 3; i++){
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
    }
    cout << d;
}