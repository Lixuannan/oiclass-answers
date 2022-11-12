//Created in Sat Nov 12 11:59:11 2022
//System: macOS-13.0.1-x86_64-i386-64bit	Python Version: 3.11.0
#include "iostream"

using namespace std;
int n,a,b,c,maxa,maxb,maxc,maxsum;
int main(){
    cin >> n;
    for (int i=1; i <= n; i++){
        cin >> a >>b >>c;
        if (a + b + c > maxsum) maxsum = a +b +c;
        if (a > maxa) maxa = a;
        if (b > maxb) maxb = b;
        if (c > maxc) maxc = c;
    }
    cout << maxsum << " " <<  maxa << " " <<  maxb << " " <<  maxc;
}