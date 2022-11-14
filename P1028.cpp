// Created in Sat Nov 12 16:27:10 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
#include<cmath>
using namespace std;
int num;
int tmp = 999999;
int cpnum1, cpnum2;
int n[201];
int main(){
    cin>>num;
    for (int i = 1; i <= num; i++){
        cin>>n[i];
    }
    for (int i = 2; i <= num; i++){
        if (abs(n[i - 1] - n[i]) < tmp){
            cpnum1 = n[i - 1];
            cpnum2 = n[i];
            tmp = abs(n[i - 1] - n[i]);
            continue;
        }
    }
    cout<<cpnum1<<" "<<cpnum2<<endl;
}