// Created in Sat Nov 12 16:27:41 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"

using namespace std;
int maxn, a[123];
string in;
int main(){
    cin >> in;
    for (char i:in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] > maxn) maxn = a[i];
    }
    for (int i=97; i <= 122; i++){
        if (a[i] == maxn){
            putchar(i);
        }
    }
}