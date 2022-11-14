// Created in Sat Nov 12 16:27:22 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
int num = 1;
int main(){
    cin>>n;
    for (int i=1; i <= n; i++){
        for (int ii=1; ii <= i; ii++){
            if (num == 10){
                num = 0;
            }
            cout<<num;
            num ++;
        }
        cout<<"\n";
    }
}