// Created in Sat Nov 12 16:27:23 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
using namespace std;
int n,x,y;
int main(){
    cin>>n>>x>>y;
    if (y % x == 0){
        cout << n - (y / x);
    }else {
        cout << n - (y / x) - 1;
    }
}