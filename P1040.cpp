// Created in Sat Nov 12 16:27:11 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int n;
bool p = true;
int main(){
    cin>>n;
    cout<<n<<"=";
    for (int i=2; i <= n; i++){
        while (n % i == 0)
        {
            if (p) cout<<i;
            else cout<<"*"<<i;
            n /= i;    
            p = false;        
        }
        
    }
}