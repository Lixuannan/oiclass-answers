// Created in Sat Nov 12 16:27:13 2022
// System: macOS-13.0.1-x86_64-i386-64bit
// Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
string in;
int a[123];
int maxn, minn = 9999;
int main(){
    cin >> in;
    for (char i: in){
        a[i] += 1;
    }
    for (int i=97; i <= 122; i++){
        if (a[i] > maxn) {
            maxn = a[i];
        } else if(a[i] < minn && a[i] != 0){
            minn = a[i];
        }
    }
    if (maxn - minn < 2){
        cout << "No Answer\n0";
        return 0;
    } else{
        for (int i=2; i <= ceilf(sqrt(maxn - minn)); i++){
            if ((maxn - minn) % i == 0 && i != maxn - minn){
                cout << "No Answer\n0";
                return 0;
            }
        }
        cout << "Lucky Word\n" << maxn - minn;
        return 0;
    }
}