//Created in Wed Nov  9 16:22:15 2022
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