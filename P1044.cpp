//Created in Sat Nov 12 11:58:33 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
using namespace std;
int n, in, in2, gcd;

int _gcd(int n, int m){
    int gcd=0;
    for (int i=1; i<=min(n,m); i++){
        if (n % i == 0 && m % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    cin>>n;
    cin>>in;
    for (int i=1; i < n; i++){
        cin>>in2;
        gcd = _gcd(in, in2);
        in = gcd;
    }
    cout<<gcd;
}