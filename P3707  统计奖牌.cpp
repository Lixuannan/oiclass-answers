//Created in Fri Nov 11 10:52:32 2022
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