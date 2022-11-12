//Created in Sat Nov 12 11:58:33 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int l,r,n,cnt;
int main(){
    cin>>l>>r;
    for (int i=l; i <= r; i++){
        n = i;
        for (int ii=0; ii <= 5; ii++){
            if (n / (long long)pow(10, ii) % 10 == 2){
                cnt ++;
            }
        }
    }
    cout<<cnt;
}