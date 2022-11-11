//Created in Fri Nov 11 15:13:00 2022
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