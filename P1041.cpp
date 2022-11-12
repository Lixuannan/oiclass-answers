//Created in Sat Nov 12 11:58:33 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
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