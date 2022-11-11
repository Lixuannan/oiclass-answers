//Created in Fri Nov 11 15:24:21 2022
 //System: Darwin 22.1.0
#include<iostream>
#include<cmath>

using namespace std;

int n;

bool isprime(long long n){
    bool p = true;
    for (int i=2; i <= n; i++){
        if (n % i == 0 && n != i){
            p = false;
        }
    }
    return p;
}

int main(){
    cin>>n;
    for (int i=2; i < n; i++){
        if (isprime(i) && isprime(n - i) && i <= n-i){
            cout<<n<<"="<<i<<"+"<<n - i<<endl;
        }
    }
}