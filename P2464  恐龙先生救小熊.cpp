//Created in Wed Nov  9 16:22:02 2022
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