//Created in Sat Nov 12 09:25:41 2022
 //System: Darwin 22.1.0
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