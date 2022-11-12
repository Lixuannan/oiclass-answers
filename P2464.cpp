//Created in Sat Nov 12 11:58:55 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"
#include "cmath"

using namespace std;
int h, tim = 0, hei = 1;
int main(){
    cin >> h;
    while(abs(h - hei) > abs(h - 2 * hei)){
        tim += 1;
        hei *= 2;
    }
    cout << tim << "\n" << abs(h - hei);
}