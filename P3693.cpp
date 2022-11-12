//Created in Sat Nov 12 11:59:09 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
int n,m;

bool isprime(int x){
    if (x == 2){
        return true;
    }else{
        for (int i=2; i <= ceilf(sqrt(x)); i++){
            if (x % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    cin >> n >> m;
    for (int i=min(n , m); i <= max(n, m); i++){
        if (isprime(i) && i > 1){
            cout << i << " ";
            break;
        }
    }
    for (int i=max(n , m); i >= min(n, m); i--){
        if (isprime(i)){
            cout << i;
            break;
        }
    }
}