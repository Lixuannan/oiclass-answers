// Created in Sat Nov 12 16:27:10 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include<iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    cout<<(n - n%3) / 3;
}